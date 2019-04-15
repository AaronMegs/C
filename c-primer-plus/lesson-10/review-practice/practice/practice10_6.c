/* practice10_6.c -- program 10.13.6
 * 编写一个函数，把double类型数组中的数据倒序排列
 */
#include <stdio.h>
void reset(double *ar, double *ar2);

int main(void)
{
	double arr[6] = {1, 3, 5, 7, 9, 11};

	reset(arr, arr + 6);

	return 0;
}

void reset(double *ar, double *ar2)
{
	printf("正序为:\n");
	while (ar < ar2)
	{
		printf("%6.2f", *ar);
		ar++;
	}
	printf("\n倒序为:\n");
	while (ar > (ar2 - 6))
	{
		printf("%6.2f",*(--ar));
	}
	putchar('\n');
}
