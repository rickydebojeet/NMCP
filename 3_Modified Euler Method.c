#include <stdio.h>
#include <math.h>

float f(float , float);

void main()
{
    float x0, y0, h, xn, x1, y1, y11, y12, y13, e;
    printf("\nEnter the initial values of x and y :\t");
    scanf("%f %f", &x0, &y0);
    printf("\nEnter the step length:\t");
    scanf("%f", &h);
    printf("\nEnter the last value of x for which y is required :\t");
    scanf("%f", &xn);
    printf("\nEnter the precision value:\t");
    scanf("%f", &e);
    while(x0 <= xn)
    {
        printf("\nWhen x = %f then y = %f\n", x0, y0);
        y11 = (y0 + (h * f(x0, y0)));
        x1 = x0 + h;
        y12 = (y0 + ((h/2) * (f(x0, y0) + f(x1, y11))));
        while(fabs(y11 - y12) > e)
        {
            y13 = (y0 + ((h/2) * (f(x0, y0) + f(x1, y12))));
            y11 = y12;
            y12 = y13;
        }
        y0 = y12;
        x0 = x1;
    }
}

float f(float x, float y)
{
    return(y + x);
}
