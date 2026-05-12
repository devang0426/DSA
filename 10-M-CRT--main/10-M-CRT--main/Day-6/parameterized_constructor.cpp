#include <iostream>
using namespace std;
class Cricketers
{
public:
    string name;
    int runs;
    double avg;

    // Parameterized constructor
    Cricketers(string n, int r, double avg)
    {
        name = n;
        runs = r;
        this->avg = avg;
    }

    // Member function
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    Cricketers c1("Sachin", 10000, 48.6);
    c1.show();

    return 0;
}