#include <stdio.h>

float f(float, float);

void main()
{
    float x0, x1, y0, y1, h, k1, k2, k3, k4, xn;
    printf("\nEnter the initial value of x and y:\t");
    scanf("%f %f", &x0, &y0);
    printf("\nEnter the step length:\t");
    scanf("%f", &h);
    printf("\nEnter the final value of x:\t");
    scanf("%f", &xn);
    while(x0 <= xn)
    {
        printf("\nWhen x = %f -> y = %f", x0, y0);
        k1 = (h * f(x0, y0));
        k2 = (h * (f((x0 + (h / 2)), (y0 + (k1 / 2)))));
        k3 = (h * (f((x0 + (h / 2)), (y0 + (k2 / 2)))));
        k4 = (h * (f((x0 + h), (y0 + k3))));
        y1 = (y0 + ((1 / 6.0) * (k1 + (2 * k2) + (2 * k3) + k4)));
        x1 = x0 + h;
        y0 = y1;
        x0 = x1;
    }
}

float f(float x, float y)
{
    return (x + y);
}
