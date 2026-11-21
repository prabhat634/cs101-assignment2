
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation.");
    }
    else
    {
        D = b * b - 4 * a * c;

        if (D >= 0)
        {
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);

            printf("First root = %.2f\n", root1);
            printf("Second root = %.2f\n", root2);
        }
        else
        {
            printf("Roots are not real.");
        }
    }

    return 0;
}
