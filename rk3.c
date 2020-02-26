#include <stdio.h>
#include <math.h>

float f(float, float);

void main()
{
    float x0, y0, xn, h, x1, y1, k1, k2, k3;
    printf("\nEnter the initial values :\t");
    scanf("%f %f", &x0, &y0);
    printf("\nEnter the step length :\t");
    scanf("%f", &h);
    printf("Enter the final value of x :\t");
    scanf("%f", &xn);
    while (x0 <= xn)
    {
        printf("\nWhen x = %f y = %f", x0, y0);
        k1 = (h * f(x0, y0));
        k2 = (h * f((x0 + (h / 2)), (y0 + (k1 / 2))));
        k3 = (h * f((x0 + h), (y0 + (h * f((x0 + h), (y0 + k1))))));
        y1 = (y0 + ((1 / 6) * (k1 + (4 * k2) + k3)));
        y0 = y1;
        x0 = x1;
    }
}

float f(float x, float y)
{
    return (x + y);
}