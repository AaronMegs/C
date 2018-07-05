// 统计再读到文件结尾之前读取的字符数
#include <stdio.h>

int main(void)
{
	int count=0;
	char ch;

	printf("Please enter some charaters,then I will count:\n");
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		count++;
	}
	printf("The number of charaters is %d.\n", count);

	return 0;
}
