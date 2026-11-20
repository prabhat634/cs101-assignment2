
#include <stdio.h>

int main()
{
    int a = 8, left, right;

    left = a << 2;
    right = a >> 2;

    printf("Original value = %d\n", a);
    printf("After Left Shift (8 << 2) = %d\n", left);
    printf("After Right Shift (8 >> 2) = %d\n", right);

    return 0;
}
