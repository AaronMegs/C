// 实现一个接受三个参数的函数，一个字符两个整数，字符为
// 待打印，第一个整数为每一行待打印的个数，第二个为行数
#include <stdio.h>

void put_char(char ch, int a, int b);

int main(void)
{
    char ch;
    int a, b;

    printf("Please enter a charactor:\n");
    scanf("%c", &ch);
    printf("Please enter a integer of one line print number:\n");
    scanf("%d", &a);
    printf("Enter a integer of line number:");
    scanf("%d", &b);
    put_char(ch, a, b);

    return 0;
}

void put_char(char ch, int a, int b)
{
    int l, n;

    for (l = 1; l <= b; l++)
    {
        for (n = 1; n <= a; n++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}