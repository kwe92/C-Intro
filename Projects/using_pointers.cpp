#include <iostream>
using namespace std;

double *map(double(func)(double n), double arr[])
{
    int length = sizeof(arr) / sizeof(double);
    double newArr[length];
    for (int i = 0; i < length; i++)
    {
        newArr[i] = func(arr[i]);
    }
    return newArr;
}

double times2(double n)
{
    return n * 2;
}

int main()
{
    // an array with 5 elements.
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *ptr;
    ptr = map(times2, balance);
    // double *p;
    // p = balance;
    //    p = ptr;

    // output each array element's value
    cout << "Array values using pointer " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *map(times2, balance + i) << endl;
    }
    cout << "Array values using balance as address " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "*(balance + " << i << ") : ";
        cout << times2(*(balance + i)) << endl;
    }

    return 0;
}