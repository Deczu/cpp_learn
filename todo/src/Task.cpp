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

void Task::setTaskId(int task_id){
    id = task_id;
}


void Task::printTaskInfo()
{
    std::cout << "TASK[id="<<id<<"]"<<"[Status="<<statusNames.at(status)<<"]"<<"[Description="<<description<<"]\n";
}


void Task::getJsonString(){
// TODO: change to std::string -> return instead of cout
    std::string jsonObj = "{\n";
    jsonObj+= " \"id\":"+ std::to_string(id)+",\n";
    jsonObj+= " \"status\":\""+ statusNames.at(status)+"\",\n";
    jsonObj+= " \"desc\":\""+ description+"\"\n";
    jsonObj +="}";
    std::cout << "JSON Obj: \n"<<jsonObj<<std::endl;
}

