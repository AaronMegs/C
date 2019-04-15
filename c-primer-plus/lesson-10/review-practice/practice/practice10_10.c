// practice10_10.c -- program 10.13.10
// 把两个数组中的对应元素相加，然后把结果储存到第三个数组中
// 函数接受3个数组名和一个一个数组的大小
#include <stdio.h>
void sum_arr_2d(double *target, double *source1, double *source2, int n);

int main(void)
{
	double source1[4] = {2, 4, 5, 8};
	double source2[4] = {1, 0, 4, 6};
	double target[5];

	sum_arr_2d(target, source1, source2, 4);
	for (int j = 0; j < 4; j++)
	{
		printf("source1[%d] = %.2lf\n", j, source1[j]);
		printf("source2[%d] = %.2lf\n", j, source2[j]);
		printf("target[%d] = %.2lf\n", j, target[j]);
	}

	return 0;
}

void sum_arr_2d(double *target, double *source1, double *source2, int n)
{
	for (int i = 0; i < n; i++)
	{
		target[i] = source1[i] + source2[i];
	}

	return;
}
