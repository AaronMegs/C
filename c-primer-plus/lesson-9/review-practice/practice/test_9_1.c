// 返回两个double 类型值的较小值
#include <stdio.h>

double min(double x, double y);

int main(void)
{
    double x, y;

    printf("Please enter a pair of double type numbers(q to quit):\n");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The lesser of %.2lf and %.2lf is %.2lf.\n", x, y, min(x, y));
        printf("Enter a pair of double type numbers(q to quit):\n");
    }
    printf("Bye!\n");

    return 0;
}

double min(double x, double y)
{
    double min_num;

    if (x > y)
    {
        min_num = y;
    }
    else
    {
        min_num = x;
    }

    return min_num;
}