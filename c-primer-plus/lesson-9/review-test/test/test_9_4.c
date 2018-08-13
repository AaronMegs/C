// 计算两个数的调和平均数
#include <stdio.h>

double equl(double a, double b);

int main(void)
{
    double n, m;
    double thequl;

    printf("Please enter two double numbers:\n");
    scanf("%lf %lf", &n, &m);
    thequl = equl(n, m);
    printf("%.2lf and %.2lf harmonic average is %.2lf.\n", n, m, thequl);

    return 0;
}

double equl(double a, double b)
{
    double res;
    double s1;

    s1 = ((1 / a) + (1 / b)) / 2;
    res = 1 / s1;

    return res;
}