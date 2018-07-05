// 用二分法进行猜数游戏——最大是100
// 改编自guess.c
// 此程序虽然能实现但是还不完善，还需要改进
#include <stdio.h>

int main(void)
{
	int guess;
	int min, max;
	int tr;
	char response;
	max = 100;
	guess = 50;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh, is your number %d?\n", guess);
	while ((response = getchar()) != 'y')
	{
		if (response = 'n')
		{
			while (getchar() != '\n')
			{
				continue;
			}
			printf("If guess is great, enter g:\n");
			printf("If guess is less, enter l:\n");
			if (getchar() == 'g')
			{
				tr = guess;
				max = tr;
				guess = max / 2;
			}
			else
			{
			tr = (max - guess) / 2;
				guess = max - tr;
			}
			while (getchar() != '\n')
			{
				continue;
			}
			printf("Well, then, it is %d.\n", guess);
		}
		else 
		{
			printf("Sorry, I understand only y or n.\n");
		}
	}
	printf("I knew I could do it!\n");

	return 0;
}
