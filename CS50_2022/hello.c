// including (importing) a Header File
//      - adding extra functionality to our C program
//      - the header file stdio adds printf
//      - amongst many other functions and features

#include <stdio.h>

float times2(float num)
{
    return num * 2;
}

// The main function
//      - The starting point for program execution
int main()
{
    float num1, num2;
    num1 = 25;
    num2 = times2(num1);

    printf("Hello, Universe\n");
    printf("We are ONE.\n");
    printf("%f * 2 = %f\n", num1, num2);
    return 0;
}