// swap2.c -- 第二个版本的交换函数 -- 查找 swap1.c 的问题
#include <stdio.h>

void interchange(int, int);         // 声明函数

int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int u, int v)      // 定义函数
{
    int temp;

    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}