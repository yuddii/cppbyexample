#include <iostream>
#include <vector>
#include "event_thread.h"
#include "task.h"

using namespace TaskSpace;

int main()
{
    std::cout << "线程任务" << std::endl;
    std::vector<EventThread *> event_thread_pool_(5);
    for (int i = 0; i < 5; i++)
    {
        std::string ss = "Thread_" + std::to_string(i);
        event_thread_pool_[i] = new EventThread(ss);
    }
    return 0;
}