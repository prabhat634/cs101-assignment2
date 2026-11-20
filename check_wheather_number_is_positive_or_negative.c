
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num > 0) ? printf("Number is Positive") :
    (num < 0) ? printf("Number is Negative") :
                printf("Number is Zero");

    return 0;
}
