//	根据加减乘除选项来计算数
#include <stdio.h>
#include <ctype.h>

float f_num(void);
float s_num(void);
char get_ch(void);
char get_first(void);
 
int main(void)
{
	float num_f;
	float num_s;
	double d_result = 0;
	char ch;
	char fuhao;

	do
	{	
		printf("Enter teh operation of your choice:\n");
		for (int i = 1; i < 50; i++)
		{
			printf("*");
		}
		printf("\n");
		printf("a. add		s. subtract\n");
		printf("m. multiply	d. divide\n");
		printf("q. quit\n");
		for (int j = 1; j < 50; j++)
		{
			printf("*");
		}
		printf("\n");
		ch = get_ch();
		if (ch != 'q')
		{
			num_f = f_num();
			num_s = s_num();
			switch (ch)
			{
				case 'a': 
					d_result = num_f + num_s;
					fuhao = '+';
					break;
				case 's':
					d_result = num_f - num_s;
					fuhao = '-';
					break;
				case 'm':
					d_result = num_f * num_s;
					fuhao = '*';
					break;
				case 'd':
					while (num_s == 0)
					{
						printf("Enter a number other than 0:\n");
						//float k;
						//scanf("%ls")
						num_s = s_num();
					}
					d_result = num_f / num_s;
					fuhao = '/';
					break;
				defalt:
					break;

			}
			printf("%.2f %c %.2f = %.2lf\n", num_f, fuhao, num_s, d_result);
		}
	}
	while(ch != 'q');
	printf("Bye.\n");
		//else 
		//{
		//	printf("Bye.\n");
		//}

	return 0;
}

float f_num(void)
{
	float a;

	printf("Enter first number:");
	//scanf("%f", &a);
	while (scanf("%f", &a) != 1)
        {
            char ch = 0;
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
    //    getchar();
/*	while (scanf("%f", &a) != 1);		//write for myself
	{
		putchar(a);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
	}*/
//	while (getchar() != '\n')
//	{			
//		continue;
//	}

	return a;
}

float s_num(void)
{
	float b;

	printf("Enter second number:");
	//scanf("%f", &b);
	while (scanf("%f", &b) != 1)
        {
            char ch = 0;
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
    //    getchar();
/*	while ((scanf("%f", &b)) != 1);
	{
		putchar(b);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
	}
*/
	return b;
}

char get_ch(void)
{
	char ch_i;
		
	ch_i = get_first();
	while (ch_i != 'a' && ch_i != 's' && ch_i != 'm' && ch_i != 'd' && ch_i != 'q')
	{
		printf("%c is not a,s,m,d or q.please enter again:\n", ch_i);
		ch_i =get_first();
	}

	return ch_i;
}

char get_first(void)
{
	int ch_f;

	ch_f = getchar();
	while (isspace(ch_f))
	{
		ch_f = getchar();
	}
	while (getchar() != '\n')
	{
		continue;
	}
	
	return ch_f;
}
