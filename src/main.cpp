#include <iostream>
#include <vector>
#include "event_thread.h"
#include "task.h"

using namespace TaskSpace;

int main()
{
    std::cout << "什么" << std::endl;
    std::vector<EventThread *> event_thread_pool_;
    event_thread_pool_.reserve(5);
    for (int i = 0; i < 5; i++)
    {
        std::string ss = "Thread_" + std::to_string(i);
        event_thread_pool_[i] = new EventThread(ss);
    }
    return 0;
}