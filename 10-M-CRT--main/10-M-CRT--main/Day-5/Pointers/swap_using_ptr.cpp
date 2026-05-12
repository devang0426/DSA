#include <iostream>
using namespace std;
void swapNUM(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swapNUM(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}