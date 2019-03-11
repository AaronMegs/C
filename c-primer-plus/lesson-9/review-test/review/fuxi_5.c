// 把复习题4 改成返回两个double 类型的值之和
#include <stdio.h>

double sum(double, double);

int main(void)
{
	double n, m;
	n = 8.00;
	m = 9.00;

	printf("%.2lf + %.2lf = %.2lf\n", n, m, sum(n, m));

	return 0;
}

double sum (double a, double b)
{
	double s;

	s = a + b;

	return s;
}
