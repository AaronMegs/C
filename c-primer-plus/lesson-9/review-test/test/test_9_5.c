// 把两个 double 类型的变量值替换为较大的值，指针
#include <stdio.h>

void largechange(double *x, double *y);

int main(void)
{
    double a, b;

    printf("Please enter two double type number:\n");
    scanf("%lf %lf", &a, &b);
    printf("Origine x = %.2lf and y = %.2lf.\n", a, b);
    largechange(&a, &b);
    printf("Now x = %.2lf and y = %.2lf.\n", a, b);
    printf("Bye!\n");

    return 0;
}

void largechange(double *x, double *y)
{
    double temp;

    if (*x > *y)
    {
        temp = *x;
    }
    else
    {
        temp = *y;
    }
    *x = temp;
    *y = temp;
}
