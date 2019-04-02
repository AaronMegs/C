// 8.10练习题第六题b
#include <stdio.h>

int main(void)
{
	char ch;

	printf("Please enter charaters:\n");
	while ((ch = getchar()) != '\n')
	{
		putchar(ch++);
		putchar(++ch);
	}
	printf("\n");
	
	return 0;
}
