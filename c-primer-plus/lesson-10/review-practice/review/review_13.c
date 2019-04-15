// review_13.c -- program 10.12.13
#include <stdio.h>
void show(const double ar[], int n);
void show2(const double ar2[][3], int n);

int main(void)
{
	show((double []) {8, 3, 9, 2}, 4);
	show2((double [][3]) {{8, 3, 9}, {5, 4, 1}}, 2);

	return 0;
}

void show(const double ar[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("ar[%d] = %.2f\n", i, ar[i]);
	}
	
}


void show2(const double ar2[][3], int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < 3; k++)
		{
			printf("ar[%d][%d] = %.2f\n", j, k, ar2[j][k]);
		}
	}
}
