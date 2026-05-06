#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            if (r == 1 || r == n || c == 1 || c == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}