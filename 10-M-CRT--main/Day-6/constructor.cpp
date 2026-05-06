#include <iostream>
using namespace std;
class Student
{
    // Data members
public:
    string name;
    int rollno;
    // Default constructor
    Student()
    {
        name = "Riya";
        rollno = 10;
    }

    // print
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Default constructor is called" << endl;
    }
};
int main()
{
    Student s1;
    s1.show();
    return 0;
}