#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    (a == b + c || b == a + c || c == a + b)
        ? printf("One number is equal to the sum of the other two.")
        : printf("No number is equal to the sum of the other two.");

    return 0;
}