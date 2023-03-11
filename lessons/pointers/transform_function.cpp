#include <stdio.h>
#include <iostream>
#include <string>
#include <functional>

using namespace std;

union Real
{
    int i;
    double d;
};

int *transform(int arr[], int (*func)(int))
{
    int len = sizeof(arr) / sizeof(arr[0]);

    int *newArr = new int[len];

    for (int i = 0; i < len; i++)
    {
        newArr[i] = func(arr[i]);
    }
    return newArr;
}

int timesPi(int x)
{
    return x * 2;
}

void printArray(int *arr)
{
    int len = *(&arr + 1) - arr;

    cout << "Length" << len << endl;

    for (int i = 0; i < len; i++)
    {
        cout << *(arr + i) << ", " << endl;
    }
}

int main()
{
    int myList[5] = {1, 2, 3, 4, 5};

    int *transformedArr = transform(myList, timesPi);

    for (int i = 0; i < 5; i++)
    {
        cout << *(transformedArr + i) << ", " << endl;
    }

    // printArray(transformedArr);

    // int *p;

    // p = myList;

    // int len = sizeof(myList) / sizeof(myList[0]);

    // cout << len << endl;

    // int myList2[] = {};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(p + i) << endl;
    // }

    return 0;
}