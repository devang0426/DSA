#include <iostream>
using namespace std;
int main()
{
    int n; // 5 aur i  = 2  j = 3 5 4 3 2
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}