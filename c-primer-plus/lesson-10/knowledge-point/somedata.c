// program 10.3
// somedata.c -- 部分初始化数组
#include <stdio.h>
#define SIZE 4

int main(void)
{
	int somedata[SIZE] = {1492, 1066};
	int i;

	printf("%2s%14s\n", "i", "somedata[i]");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, somedata[i]);
	}

	return 0;
}
