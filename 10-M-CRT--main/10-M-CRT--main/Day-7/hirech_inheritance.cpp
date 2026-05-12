#include <iostream>

using namespace std;

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
class Cricketer : public Player
{
public:
    int runs;
    void setruns(int r)
    {
        runs = r;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

class Footballer : public Player
{
public:
    int goals;
    void setgoals(int g)
    {
        goals = g;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Goals: " << goals << endl;
    }
};

int main()
{
    Cricketer c1;
    c1.setName("Virat");
    c1.setruns(12000);
    c1.show();

    Footballer f1;
    f1.setName("Sunil");
    f1.setgoals(85);
    f1.show();
    return 0;
}
