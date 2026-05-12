#include <iostream>
using namespace std;

class Sum
{
public:
    int sumofArray(int nums[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += nums[i];
        }
        return sum;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sum s1;
    int ans = s1.sumofArray(arr, size);
    cout << ans << endl;

    return 0;
}