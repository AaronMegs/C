// 报告输入中的大小写字母的个数
#include <stdio.h>

int main(void)
{
	int i = 0;
	int n = 0;
	int ch;

	printf("Please enter some characters:\n");
	while ((ch = getchar()) != '&')
	{
		if (ch > 'A' && ch < 'Z')
		{
			putchar(ch);
			i++;
		}
		if ((ch > 'a' && ch < 'z'))
		{
			putchar(ch);
			n++;
		}
	}
	printf("\n");
	printf("The number of uppercase characters is %d.\n", i);
	printf("The number of lowercase characters is %d.\n", n);

	return 0;
}
