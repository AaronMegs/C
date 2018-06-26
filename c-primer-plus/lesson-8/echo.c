//程序清单8.1
//echo.c -- 重复输入

#include <stdio.h>

int main(void)
{
	char ch;
	
	printf("请输入字符串（#结束）:\n");

	while ((ch = getchar()) != '#')
	{	
		putchar(ch);
	}
	printf("\n");

	return 0;
}
