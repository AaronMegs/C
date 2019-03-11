// 复习题4 - 设计一个函数返回两个整数之和
#include <stdio.h>

int sum(int, int);

int main(void)
{
	int n, m;
	n = 8;
	m = 9;

	printf("%d + %d = %d\n", n, m, sum(n, m));

	return 0;
}

int sum (int a, int b)
{
	int s;

	s = a + b;

	return s;
}
