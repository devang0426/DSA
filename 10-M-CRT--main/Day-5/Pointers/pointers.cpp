#include <iostream>
using namespace std;

int main()
{
    int value = 10;
    int *ptr = &value;

    cout << "Add:" << ptr << endl;
    cout << "Value:" << *ptr << endl;

    *ptr = 20;
    cout << "Value:" << *ptr << endl;
    cout << "Value:" << value << endl;
    return 0;
}