#include <iostream>
using namespace std;

void ReverseArray(int nums[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr, size);

    return 0;
}