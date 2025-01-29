#include <iostream>
#include <thread>
#include <vector>
#include "event_thread.h"
#include "task.h"
using namespace MyNameSpace;

// 初始化线程
EventThread::EventThread(const std::string name) : task_(new Task("grace", 27)), threadName_(name), thread_(&EventThread::RunTask, this)
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

int main()
{
    std::vector<EventThread *> event_thread_pool_;
    for (int i = 0; i < 5; i++)
    {
        std::string ss = "Thread_" + std::to_string(i);
        event_thread_pool_.push_back(std::make_unique<Thread>(ss));
    }
    return 0;
}