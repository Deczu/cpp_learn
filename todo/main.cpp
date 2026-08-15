#include <iostream>
#include "Task.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    std::vector<Task> tasklist {};

            std::string description;
    while(true){
        Task t;
        cout << "Provide TASK description\n";
        cin >> description;
        t.setDescription(description);
        tasklist.emplace_back(t);
        cout << "PRINT TASK LIST !\n";
        for (auto i : tasklist){
            i.getJsonString();
        }
        if(description == "q") break;
    }
    return 0;
    //cout << "Desc provided: " << t.getDescription()<< endl;
    //t.printTaskInfo();
    //t.getJsonString();

}
