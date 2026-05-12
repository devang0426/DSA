#include <iostream>
using namespace std;

// Base Class or Parent Class of  Cricketer class
class Player
{
public:
    string name;
    int age;
    void setName(string n)
    {
        name = n;
    }
};

// Derived Class or Child Class of Player class
// Parent class or Base class of IndianCricketer class

class Cricketer : public Player
{
public:
    int runs;
    void setruns(int r)
    {
        runs = r;
    }
};

class IndianCricketer : public Cricketer
{
public:
    string state;
    void setState(string s)
    {
        state = s;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "State: " << state << endl;
    }
};

int main()
{
    int r;
    cin >> r;
    string s;
    cin >> s;
    IndianCricketer c1;
    c1.setName("Virat");
    c1.setruns(r);
    c1.setState(s);
    c1.show();

    return 0;
}