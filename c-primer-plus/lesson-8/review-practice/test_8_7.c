// 根据选项和用户输入的时间来计算总工资，税率，以及净工资，选项是字母abcd
#include <stdio.h>
#include <ctype.h>
#define OVER_WTIME 1.5
#define TARIFF_300 0.15
#define TARIFF_450 0.20
#define TARIFF_ADD 0.25
#define L_INCOME 300

char get_char(void);
char get_first(void);
double sum_income(double a, double b);

int main(void)
{
	double sum = 0.0;
	double t_work;
	int ch;
	double base_pay;
	double tax = 0.0;
	double income = 0.0;

	printf("Tell me you work time for one week and chose a base pay.\n");
	printf("I well calculate wage, taxes, and net income.\n");
	for (int i = 0; i < 50; i++)
	{
		putchar('*');
	}
	printf("\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a.$8.75/hr		b.$9.33/hr\n");
	printf("c.$10.00/hr		d.$11.20/hr\n");
	printf("q.quit\n");
	printf("\n");
	for (int i = 0; i < 50; i++)
	{
		putchar('*');
	}
	printf("\n");
		
	ch = get_char();
	if(ch != 'q')
	{
		switch (ch)
		{
			case 'a':
				base_pay = 8.75;
				break;
			case 'b':
				base_pay = 9.33;
				break;
			case 'c':
				base_pay = 10.00;
				break;
			case 'd':
				base_pay = 11.20;
				break;
			case 'q':
				break;
			default: break;
		}
		printf("Enter your work time:\n");
		scanf("%lf", &t_work);
		if (t_work > 40)
		{
			t_work = (t_work - 40) * OVER_WTIME + 40;	
		}
		sum = sum_income(t_work, base_pay);
		if (sum <= L_INCOME)
		{
			tax = sum * TARIFF_300;
		}
		else if (sum <= 450)
		{
			tax = ((sum - L_INCOME) * TARIFF_450 + L_INCOME * TARIFF_300);
		}
		else
		{
			tax = ((sum - 450) * TARIFF_ADD + L_INCOME * TARIFF_300 + 150 * TARIFF_450);
		}
		income = sum - tax;
		printf("You sum of income is %.2lf\n", sum);
		printf("taxes is %.2lf\n", tax);
		printf("net income is %.2lf\n", income);
	}
	
	return 0;
}

char get_char(void)
{
	char i;

	i = get_first();
	while ( i != 'a' && i != 'b' && i != 'c' && i != 'd' && i != 'q')
	{
		printf("%c not a, b, c, d, or q.\n", i);
		printf("Input again(a, b, c, d or q:\n");
		i = get_first();
	}

	return i;
}

char get_first(void)
{
	int n;

	n = getchar();
	while (isspace(n))
	{
		n = getchar();
	}
	while (getchar() != '\n')
	{
		continue;
	}

	return n;
}

double sum_income(double a, double b)
{
	double s;
	
	s = a * b;
	return s;
}
