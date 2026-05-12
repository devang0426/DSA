#include <iostream>
using namespace std;

void swap_array(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int Bubbble_Sort(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap_array(nums[j], nums[j + 1]);
                flag = true; // flag != flag;
            }
        }
        if (!flag)
        {
            cout << "Array is already Sorted" << endl;
            break;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Bubbble_Sort(arr, size);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}