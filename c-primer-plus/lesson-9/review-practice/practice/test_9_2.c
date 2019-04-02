// 打印指定的字符j行i列
#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int j, i;

    printf("Please enter a charactor:\n");
    scanf("%c", &ch);
    printf("Plase enter the row number:\n");
    scanf("%d", &j);
    printf("Please enter the list number:\n");
    scanf("%d", &i);
    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int n = 1; n <= j; n++)
    {
        for (int m = 1; m <= i; m++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}