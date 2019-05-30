// program 11.7
// fgets1.c -- 使用 fgets() 和 fputs()
#include <stdio.h>
#define STLEN 14

int main(void)
{
	char words[STLEN];

	puts("Enter a string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), the fputs()): \n");
	puts(words);
	fputs(words, stdout);
	puts("Done.");

	return 0;
}
