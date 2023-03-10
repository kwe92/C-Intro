#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int invoke(int x, int y, int (*func)(int, int))
{

    int result = func(x, y);
    return result;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x = 3, y = 4;

    int result = invoke(x, y, multiply);

    cout << "Result: " << result << endl;
    return 0;
}