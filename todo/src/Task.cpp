#include "Task.h"
#include <iostream>
#include <string>

Task::Task()
{
    std::cout<<"Constructor invoked\n";
}

Task::~Task()
{
    std::cout<<"Destructor invoked";
}

const std::vector<std::string> Task::statusNames = {
    "To Do",
    "Work In Progress",
    "Done"
};

void Task::setDescription(const std::string desc)
{
    description = desc;
}

std::string Task::getDescription()
{
    return description;
}


void Task::printTaskInfo()
{
    std::cout << "TASK[id="<<id<<"]"<<"[Status="<<statusNames.at(status)<<"]"<<"[Description="<<description<<"]\n";
}
