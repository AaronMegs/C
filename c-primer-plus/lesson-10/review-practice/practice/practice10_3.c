/* program 10.13.3 -- practice10_3.c */
/* 求数组中元素的最大值 */
#include <stdio.h>
int max(int *arr, int num);

int main(void)
{
	int arr_int[6] = {3, 23, 68, 8, 99, 78};
	int maxint;

	maxint = max(arr_int, 6);
	printf("arr_int[6] 中最大的数是：%d\n", maxint);

	return 0;
}

int max(int *arr, int num)
{
	int m = 0;
	int x;

	for (int i = 0; i < num; i++)
	{
		x = *(arr + i);
		if (m < x)
		{
			m = x;
		}
	}

	return m;
}
