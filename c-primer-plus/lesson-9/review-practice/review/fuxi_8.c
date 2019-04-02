// 返回三个整数参数中的最大值
#include <stdio.h>

int max_int(int, int, int);

int main(void)
{
	int a, b, c;
	int max;
	a = 12;
	b = 9;
	c = 15;

	max = max_int(a, b, c);
	printf("max = %d\n", max);
	
	return 0;
}

int max_int(int a, int b, int c)
{
	int max;

	if (a > b)
	{
		if (a > c)
			max = a;
		else
			max = c;
	}
	else 
	{
		if (b > c)
			max = b;
		else
			max = c;
	}

	return max;
}
