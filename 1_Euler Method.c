#include <stdio.h>

float f(float, float);

void main()
{
    float x0, y0, h, xn, x1, y1;
    printf("\nEnter the initial values of x and y :\t");
    scanf("%f %f", &x0, &y0);
    printf("\nEnter the step length :\t");
    scanf("%f", &h);
    printf("\nEnter the values of x for which y is required :\t");
    scanf("%f", &xn);
    while(x0 <= xn)
    {
        printf("\nWhen x = %f then y = %f\n", x0, y0);
        y1 = y0 + (h * f(x0, y0));
        x1 = x0 + h;
        y0 = y1;
        x0 = x1;
    }
}

float f(float x, float y)
{
    return ((y - x) / (x + y));
}
