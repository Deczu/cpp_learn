#ifndef TASK_H
#define TASK_H
#include <string>
#include <vector>

class Task
{
    public:
        Task(int id);
        virtual ~Task();
        enum valid_statuses {
            ToDo,
            WIP,
            DONE
        };
        static const std::vector<std::string> statusNames;

        void setDescription(const std::string desc);
        void setTaskId(int id);
        std::string getDescription();
        void printTaskInfo();
        void getJsonString();

    protected:
        std::string description = "";
        int id {};
        unsigned int status = valid_statuses::ToDo;


    private:

};

#endif // TASK_H
