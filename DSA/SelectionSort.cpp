#include <iostream>
using namespace std;

int sort(int a[], int num)
{

    for (int i = 0; i < num - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < num; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        swap(a[min], a[i]);
    }
}

int main()
{

    int arr[6] = {10, 5, 43, 9, 190, 88};
    sort(arr, 6);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}