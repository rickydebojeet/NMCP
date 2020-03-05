#include <stdio.h>
#include <math.h>
#include <conio.h>

float f(float);
float fd(float);
float fbd(float);

void main()
{
    float x0, x1, e = 0.0001;
    int i = 1;
    printf("\nEnter the guess value:\t");
    scanf("%f", &x0);
    x1 = x0 - ((f(x0) / fd(x0)));
    printf("\n-----------------------------\nIteration\tValue\n-----------------------------\n");
    if((x0 * fbd(x0)) > 0)
    {
    while(fabs(x1 - x0) > e)
    {
        printf("\n%d -----------> %f", i, x1);
        x0 = x1;
        x1 = x0 - ((f(x0) / fd(x0)));
        i++;
    }
    printf("\n-----------------------------\n\nThe final value of the root is %f", x1);
    getch();
    }
    else
    {
        printf("\nRe-enter guess value");
    }
}

float f(float x)
{
    return ((pow(x, 3) - (4 * x) + 1));
}

float fd(float x)
{
    return ((3 * pow(x, 2)) - 4);
}

float fbd(float x)
{
    return (6 * x);
}
