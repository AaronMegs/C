/* practice10_4.c -- program 10.13.4
 * 编写一个函数，返回存储在double类型数组中最大值和最小值的差值
 */
#include <stdio.h>
int maxm(double *arr1, double *arr2);
int minm(double *arr3, double *arr4);

int main(void)
{
	int i;
	int j;
	double ch;
	double ar[6] = {23, 34, 234, 55, 88, 99};

	i = maxm(ar, ar + 6);
	printf("ar[6] 中最大值和下标分别为: ar[%d] = %.2f\n",
			i, ar[i]);

	j = minm(ar, ar + 6);
	printf("ar[6] 中最小值和下标分别为: ar[%d] = %.2f\n",
			j, ar[j]);

	ch = ar[i] - ar[j];
	printf("最大值与最小值的差值为: %.2f\n", ch);

	return 0;
}

int maxm(double *arr1, double *arr2)
{
	int i = 0;
	int l = 0;
	double max = *arr1;

	while (arr1 < arr2)
	{
		if (max < *arr1)
		{
			max = *arr1;
			l = i;
		}
		arr1++;
		i++;
	}

	return l;
}

int minm(double *arr3, double *arr4)
{
	int n = 0;
	int m = 0;
	double min = *arr3;

	while (arr3 < arr4)
	{
		if (min > *arr3)
		{
			min = *arr3;
			m = n;
		}
		arr3++;
		n++;
	}

	return m;
}
