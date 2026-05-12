#include <iostream>

using namespace std;

namespace Virat
{
    void show()
    {
        cout << "He is the part RCB" << endl;
    }

}

namespace Rohit
{
    void show()
    {
        cout << "He is the part of Mi" << endl;
    }
}

int main()
{
    Virat::show();
    Rohit::show();
    return 0;
}
