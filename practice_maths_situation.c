
#include <stdio.h>
#include <math.h>

int main()
{
    double num, angle;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);

    printf("\n--- Math Functions ---\n");

    printf("Square root = %.2lf\n", sqrt(num));
    printf("Power (number squared) = %.2lf\n", pow(num, 2));
    printf("Logarithm = %.2lf\n", log(num));

    printf("Sine = %.2lf\n", sin(angle * 3.14159 / 180));
    printf("Cosine = %.2lf\n", cos(angle * 3.14159 / 180));

    printf("Absolute value = %.2lf\n", fabs(num));
    printf("Ceiling value = %.2lf\n", ceil(num));
    printf("Floor value = %.2lf\n", floor(num));

    return 0;
}
