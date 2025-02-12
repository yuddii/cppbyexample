#include <iostream>
#include <thread>
#include <vector>
#include "task.h"
#include "event_thread.h"

using namespace TaskSpace;

// 初始化线程
EventThread::EventThread(const std::string name) : task_(new TaskSpace::Task("grace", 27)), threadName_(name), thread_(&EventThread::RunTask, this)
{
    {
        std::lock_guard<std::mutex> lock(mtx_);
    }
    condition_.notify_one();
}

EventThread::~EventThread()
{
    if (thread_.joinable())
    {
        thread_.join();
    }
    delete task_;
}

void EventThread::RunTask()
{
    std::unique_lock<std::mutex> lock(mtx_);
    condition_.wait(lock, [this]() -> bool
                    { return task_ != NULL; });
    task_->Run();
}
