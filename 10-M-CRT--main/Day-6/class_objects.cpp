#include <iostream>
using namespace std;
class Student
{
private:
    int reg = 100;

public:
    // Data members
    string name;
    int rollno;

    // member function
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No:" << rollno << endl;
        cout << "Reg No:" << reg << endl;
        reg++;
    }
};
int main()
{
    Student s1;
    s1.name = "Saurav";
    s1.rollno = 18;
    s1.display();

    return 0;
}