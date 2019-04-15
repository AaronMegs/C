/* practice10_4.c -- program 10.13.4
 * 编写一个函数，返回存储在double类型数组中最大值的下标
 */
#include <stdio.h>
int maxm(double *arr1, double *arr2);

int main(void)
{
	int i;
	double ar[6] = {23, 34, 234, 55, 88, 99};

	i = maxm(ar, ar + 6);
	printf("ar[6] 中最大值和下标分别为: ar[%d] = %.2f\n",
			i, ar[i]);

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
