#ifndef TASK_H
#define TASK_H

#include <iostream>

namespace TaskSpace
{
    class Task
    {
    public:
        Task(const std::string name, int age) : name_(name), age_(age) {}
        ~Task();
        void Run();

    private:
        std::string name_;
        int age_;
    };
}

#endif // TASK_H