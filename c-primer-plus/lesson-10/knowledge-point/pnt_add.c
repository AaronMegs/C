// program 10.8
// pnt_add.c - 指针地址
#include <stdio.h>
#define SIZE 4

int main(void)
{
	short dates[SIZE];
	short index;
	short * pti;
	double bills[SIZE];
	double * ptf;
	pti = dates;		// 把数组地址赋值给指针
	ptf = bills;

	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
	{
		printf("pointers + %d: %10p %10p\n", index, dates + index, bills + index);
	}
	
	return 0;
}
