// 统计输入的单词个数以及每个单词的字母数
#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(void)
{
	char str[SIZE] = {'\0'};
	int count = 0;
	int num = 0;
	int legth;
	int i;
	double pj = 0.00;

	printf("Please enter the string:\n");
	gets(str);
	puts(str);
	legth = strlen(str);
	for (i = 0; i < legth; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				num++;
				i++;
			}
		}
	}
	pj = (num * 1.0) / (count);
	printf("The number of word is %d.\n", count);
	printf("The number of characres is %d.\n", num);
	printf("平均每个单词的字母数是 %.2lf.\n", pj);
	

	return 0;
}
