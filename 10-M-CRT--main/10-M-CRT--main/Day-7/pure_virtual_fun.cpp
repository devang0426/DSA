#include <iostream>

using namespace std;
class Player
{
public:
    virtual void show() = 0; // pure virtual function
};

class cricketers : public Player
{

public:
    int a;
    // Implementation needed for  pure virtual function
    void show()f
    {
        cout << "Cricketer class show function" << endl;
    }
};

int main()
{
    cricketers c1;
    c1.show();

    return 0;
}