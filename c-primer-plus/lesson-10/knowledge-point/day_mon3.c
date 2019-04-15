// program 10.9
// day_mon3.c -- uses pointer notation
#include <stdio.h>
#define MONTHS 12

int main(void)
{
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index;

	for (index = 0; index < MONTHS; index++)
	{
		// 与 days[index] 相同 
		printf("Month %2d has %d days.\n", index + 1, *(days + index));
	}

	return 0;
}
