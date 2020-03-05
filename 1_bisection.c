//Bisection Method
#include <stdio.h>
#include <math.h>

float fun(float x)
{
    return((x*x*x)-(3 * x) + 1);
}
void change(float* x, float *y)
{
    float tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void main()
{
    int opt = 0;
    do {
    float x, x1, x2, f, f1, f2, e = 0.0001;
    printf("\nEnter the guess values :\t");
    scanf("%f %f", &x1, &x2);
    x = ((x1 + x2) / 2);
    f = fun(x);
    f1 = fun(x1);
    f2 = fun(x2);
    if ((f1 < 0)&&(f2 > 0))
        change(&x1, &x2);
    f1 = fun(x1);
    f2 = fun(x2);
    printf("\nThe root is %f", x);
    if((f1 * f2) < 0)
    {
        while(fabs(x2 - x1) > e)
        {
            if((f * f1) < 0)
                x2 = x;
            else
                x1 = x;
            x = ((x1 + x2) / 2);
            f = fun(x);
            f1 = fun(x1);
            f2 = fun(x2);
            printf("\nThe root is %f", x);
        }
        opt = 1;

    }
    else
        printf("\nRe-enter the guess values");
    }while(opt != 1);
}
