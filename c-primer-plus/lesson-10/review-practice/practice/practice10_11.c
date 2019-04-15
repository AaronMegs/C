// practice10_11.c -- program 10.13.11
// 打印一个3*5的int型二维数组，然后将各值翻倍，并显示各元素的新值
// 要求：这两个函数都以函数名和行数作为参数
#include <stdio.h>
void print_arr(int *arr1, int rows);
void dou_arr(int *arr2, int rows);
int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("source:\n");
	print_arr(arr, 5);
	dou_arr(arr, 5);
	printf("target:\n");
	print_arr(arr, 5);

	return 0;
}

void print_arr(int *arr1, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		printf("[%d] = %d\n", i, arr1[i]);
	}

	return;
}

void dou_arr(int *arr2, int rows)
{
	for (int j = 0; j < rows; j++)
	{
		arr2[j] = 2 * arr2[j];
	}

	return;
}
