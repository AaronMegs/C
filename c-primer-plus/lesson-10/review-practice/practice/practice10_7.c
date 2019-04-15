// practice10_7.c -- program 10.13.7
#include <stdio.h>
void copy_arr(double target[][5], double source[][5], int num);
/* void copy_ptr(double *target, double * source, int num);
 * void copy_ptrs(double * target, double * source_begin, double *source_end);
 */

int main(void)
{
	double source[7][5] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{2.2, 3.3, 4.4, 5.5, 6.6},
		{3.3, 4.4, 5.5, 6.6, 7.7},
		{4.4, 5.5, 6.6, 7.7, 8.8},
		{5.5, 6.6, 7.7, 8.8, 9.9},
		{6.6, 7.7, 8.8, 9.9, 10.10},
		{7.7, 8.8, 9.9, 10.10, 11.11}
	};
	double target1[7][5];
/*	double target2[5];
*	double target3[5];
*/

	copy_arr(target1, source, 7);
/*	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
*/
	for ( int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("target1[%d][%d] = %.2f\n", i, j, target1[i][j]);
		}
	//	printf("target2[%d] = %.2f\n", i, target2[i]);
	//	printf("target3[%d] = %.2f\n", i, target3[i]);
	}

	return 0;
}

void copy_arr(double target[][5], double source[][5], int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			target[i][j] = source[i][j];
		}
	}

	// return;	 void型，不能使用带值的return，可以没有return
}
/* void copy_ptr(double *target, double * source, int num)
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
*/	/* Another way to recycle
	 *
	 * for (double *i = source_begin; i < source_end; i++)
	 * {
	 *  	*target++ = *i;
	 * }
	 */
//}
