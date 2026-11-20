
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "3.145";

    int a = atoi(s);
    long int b = atol(s);
    float c = (float)atof(s);
    double d = strtod(s, NULL);

    printf("Original String = %s\n", s);
    printf("Integer value = %d\n", a);
    printf("Long Integer value = %ld\n", b);
    printf("Float value = %.3f\n", c);
    printf("Double value = %.3lf\n", d);

    return 0;
}
