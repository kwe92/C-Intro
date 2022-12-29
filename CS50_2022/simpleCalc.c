#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char operator;
    double num1, num2, result;
    printf("\nWelcome to SIMPLE CALC!\n\n");

    printf("Please choose an operation to perform:\n\n");

    printf("[a]ddition\n");
    printf("[s]ubtraction\n");
    printf("[m]ultiplication\n");
    printf("[d]ivision\n\n");

    scanf("%c", &operator);

    printf("Enter value1: \n");
    scanf("%lf", &num1);

    printf("Enter value2: \n");
    scanf("%lf", &num2);

    printf("operator: %c\n", operator);

    printf("value 1: %lf operator: %c value 2: %lf\n", num1, operator, num2);

    if (strcmp(&operator, "a") == 0)
    {
        result = num1 + num2;
        printf("%lf + %lf = %lf\n", num1, num2, result);
    }
    if (strcmp(&operator, "s") == 0)
    {
        result = num1 - num2;
        printf("%lf - %lf = %lf\n", num1, num2, result);
    }
    if (strcmp(&operator, "m") == 0)
    {
        result = num1 * num2;
        printf("%lf * %lf = %lf\n", num1, num2, result);
    }
    if (strcmp(&operator, "d") == 0)
    {
        result = num1 / num2;
        printf("%lf / %lf = %lf\n", num1, num2, result);
    }

    return 0;
}