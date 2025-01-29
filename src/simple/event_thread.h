#include <mutex>
#include <condition_variable>
#include <iostream>
#include "task.h"

class Task;

class EventThread
{
public:
    EventThread(const std::string);
    ~EventThread();
    void RunTask();

private:
    Task *task_;
    std::mutex mtx_;
    std::condition_variable condition_;
    std::string threadName_;
    int size_;
    std::thread thread_;
};