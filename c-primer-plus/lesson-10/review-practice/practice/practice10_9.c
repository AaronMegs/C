// practice10_9.c -- program 10.13.9
// 使用一个处理变长数组的函数将一个double型二维数组拷贝至另一个二维数组中：3 * 5
// 编写一个以变长数组为形参的函数以显示两个数组的内容，这两个函数应能处理任意N*M数组
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_arr_2d(double target1[][5], double source[][5], int rows);
void print_arr_2d(double source[][5], int rows);

int main(void)
{
	double var[ROWS][COLS] = 
	{
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{2.2, 3.3, 4.4, 5.5, 6.6},
		{3.3, 4.4, 5.5, 6.6, 7.7}
	};
	double target1[ROWS][COLS];

	copy_arr_2d(target1, var, ROWS);
	printf("source:\n");
	print_arr_2d(var, ROWS);
	printf("target1:\n");
	print_arr_2d(target1, ROWS);

	return 0;
}

void copy_arr_2d(double target1[][5], double source[][5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			target1[i][j] = source[i][j];
		}
	}

	return; 
}

void print_arr_2d(double source[][5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("[%d][%d] = %5.2f\n", i, j, source[i][j]);
		}
	}
	putchar('\n');

	return;
}
