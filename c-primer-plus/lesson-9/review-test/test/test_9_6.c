// 把三个 double 类型的参数变量值，根据大小重新排序，指针
#include <stdio.h>

void largechange(double *a, double *b, double *c);

int main(void)
{
    double a, b, c;

    printf("Please enter three double type number:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Origine x = %.2lf and y = %.2lf and z = %.2lf.\n", a, b, c);
    largechange(&a, &b, &c);
    printf("Now x = %.2lf and y = %.2lf and z = %.2lf.\n", a, b, c);
    printf("Bye!\n");

    return 0;
}

void largechange(double *a, double *b, double *c)
{
    double max, min, med;

    if (*a > *b)                // 很笨的方法，可以去优化
    {
        if (*a > *c)
        {
            if (*c > *b)
            {
                max = *a;
                min = *b;
                med = *c;
 
            }
            else
            {
                max = *a;
                min = *c;
                med = *b;
            }
        }
        else
        {
            max = *c;
            min = *b;
            med = *a;
        }
    }
    else
    {
        if (*b > *c)
        {
            if (c > a)
            {
                max = *b;
                min = *a;
                med = *c;
            }
            else
            {
                max = *b;
                min = *c;
                med = *a;
            }
        }
        else
        {
            max = *c;
            min = *a;
            med = *b;
        }
    }
    *a = min;
    *b = med;
    *c = max;
}
