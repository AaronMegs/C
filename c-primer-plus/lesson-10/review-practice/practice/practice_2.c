// practice_2.c -- program 10.13.2
#include <stdio.h>
void copy_arr(double target[], double source[], int num);
void copy_ptr(double *target, double * source, int num);
void copy_ptrs(double * target, double * source_begin, double *source_end);

int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
	for ( int i = 0; i < 5; i++)
	{
		printf("target1[%d] = %.2f\n", i, target1[i]);
		printf("target2[%d] = %.2f\n", i, target2[i]);
		printf("target3[%d] = %.2f\n", i, target3[i]);
	}

	return 0;
}

void copy_arr(double target[], double source[], int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		target[i] = source[i];
	}

	// return;	 void型，不能使用带值的return，可以没有return
}
void copy_ptr(double *target, double * source, int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		*(target + i) = *(source + i);
	}

	return;
}
void copy_ptrs(double * target, double * source_begin, double *source_end)
{
	while (source_begin < source_end)	
	{
		*target++ = *source_begin;
		source_begin++;
	}
	/* Another way to recycle
	 *
	 * for (double *i = source_begin; i < source_end; i++)
	 * {
	 *  	*target++ = *i;
	 * }
	 */
}
