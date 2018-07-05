// 打印每个输入的字符及其相应的ASCII十进制值，换行符和控制符分别打印，其他十个为一组
#include <stdio.h>

int main(void)
{
	int count=0;
	char ch;

	printf("Please enter some charaters,then I will count:\n");
	while ((ch = getchar()) != '&')
	{
		if (ch != '\0')
		{
			if (ch == '\n')
				printf("\n");
			else if (ch == '\t')
				printf("\t");
			else
			{
				putchar(ch);
				printf(" %d\t", ch);
				count++;
				if ((count % 10) == 0)
				{
					printf("\n");
				}
			}
		}
	}
	printf("\n");

	return 0;
}
