
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        (a + b > c) &&
        (a + c > b) &&
        (b + c > a))
    {
        printf("The sides form a valid triangle.");
    }
    else
    {
        printf("The sides do not form a valid triangle.");
    }

    return 0;
}
