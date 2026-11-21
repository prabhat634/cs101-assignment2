
#include <stdio.h>

int main()
{
    int num1, num2;
    double result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0)
    {
        result = (double)num1 / num2;
        printf("Division = %.2lf\n", result);
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
