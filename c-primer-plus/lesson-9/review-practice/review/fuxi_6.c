// 设计一个函数，接受两个 int 类型的变量，把他们的值分别改成
// 两数之和以及两数之差
#include <stdio.h>

void interchange(int *, int *);

int main (void)
{
	int n = 8;
	int m = 15;

	printf("n = %d, m = %d\n", n, m);
	interchange(&n,  &m);
	printf("after change:\n");
	printf("n = %d, m = %d\n", n, m);

	return 0;
}

void interchange (int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *a + *b;
	if (temp > *b)
	{
		*b = temp - *b;
	}
	else
	{
		*b = *b - temp;
	}
}
