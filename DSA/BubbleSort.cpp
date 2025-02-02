#include <iostream>
using namespace std;

int bubble(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for(int i=0; i<n-1; i++){
        bool sort = false;
        for (int j = 0; j < n - i; j++)
        {

            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                sort = true;
            }
        }
            if (sort == false){
                break;
            }
    }
}

int main()
{
    int arr[6] = {7, 40, 4, 3, 69, 9};
    bubble(arr, 6);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}