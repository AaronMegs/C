// program 11.6
// getsputs.c -- 使用 gets() 和 puts()
#include <stdio.h>
#define STLEN 81

int main(void)
{
	char words[STLEN];

	puts("Enter a string, please.");
	gets(words);	// 典型用法
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done.");

	return 0;
}
