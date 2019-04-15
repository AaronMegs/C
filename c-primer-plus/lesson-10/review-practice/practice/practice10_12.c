// program 10.13.12
// rain.c -- 计算每年的总降水量、年平均降水量和5年中每月的平均降水量
// 把mian()中的主要人物都改成用函数来完成
#include <stdio.h>
#define YEARS 5		// 年数
#define MONTHS 12	// 一年的月份数
void totals(const float arr1[][12], int years);
void subtots(const float arr2[][12], int years);
int main(void)
{
	//	用 2010 - 2014 年的浇水量数据初始化数组
	const float rain[YEARS][MONTHS] = 
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}, 
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
 	};

// 年总降水量，年平均降水量
	totals(rain, YEARS);
// 5年中月平均降水量
	subtots(rain, YEARS);

	return 0;
}

// 年总降水量，年平均降水量
void totals(const float arr1[][12], int years)
{
	int year, month;
	float subtot, total;
	printf(" YEAR	RAINFALL (inches)\n");
	for (year = 0, total = 0; year < years; year++)
	{		// 每年各月的降水量总和
		for (month = 0, subtot = 0; month < MONTHS; month++)
		{
			subtot += arr1[year][month];
		}
		printf("%5d %15.1f\n", 2010 + year, subtot);
		total += subtot;	// 5年的总降水量
	}
	printf("\nThe yearly average is %0.1f inches.\n\n", total / YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf("Jan	Feb	Mar	Apr	May	Jun	Jul	Aug	Sep	Oct	");
	printf("Nov	Dec\n");

	return;
}

// 5年中月平均降水量
void subtots(const float arr2[][12], int years)
{
	int year, month;
	float subtot;
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < years; year++)
		{		// 每个月， 5年的总降水量
			subtot += arr2[year][month];
		}
		printf("%4.1f\t", subtot / YEARS);
	}
	printf("\n");

	return;
}
