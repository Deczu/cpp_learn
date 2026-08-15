#include <iostream>
#include "Task.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Task t;

    std::string description;
    cout << "Provide TASK description\n";
    cin >> description;
    t.setDescription(description);
    cout << "Desc provided: " << t.getDescription()<< endl;
    t.printTaskInfo();

}
