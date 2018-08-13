// choose.c -- 函数支持模块
#include <stdio.h>
#include "fuxi_9.h"

void showchoose(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files       2) move files\n");
    printf("3) remove files     4) Quit\n");
    printf("Enter the number of your choice:\n");
}

int int_choose(int a, int b)
{
    int n;
    int m;

    printf("Please enter the number:\n");
    while (((m = scanf("%d", &n)) != 1) || (n < a || n > b))
    {
        if (m !=1)
        {
            n = 4;
            break;
        }
        if (n < a || n > b)
        {
            showchoose();
        }
    }
    
    return n;
}