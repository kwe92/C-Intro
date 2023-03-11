#include <stdio.h>
#include <iostream>
#include <string>
#include <functional>
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

int invokAnon(int x, int y, function<int(int, int)> func)
{

    int result = func(x, y);
    return result;
}

int main()
{
    int x = 3, y = 4;

    int result = invoke(x, y, multiply);

    cout << "Result: " << result << endl;

    cout << [](int x, int y) -> void {};

    return 0;
}