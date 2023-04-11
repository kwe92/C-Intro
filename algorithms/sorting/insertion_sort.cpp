#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void insertionSort(int arr[])
{
    int length = sizeof(arr) / sizeof(arr[0]);
    // if (length <= 1)
    // {
    //     return;
    // }
    for (int i = 1; i < length; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            cout << "from insertion_sort" << arr[j] << endl;
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {2, 5, 4, 3, 6, 1};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << endl;
    insertionSort(arr);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}