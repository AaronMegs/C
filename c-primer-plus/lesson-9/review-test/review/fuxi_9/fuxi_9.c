// 控制模块
#include <stdio.h>
#include "fuxi_9.h"

int main(void)
{
    int a, b;
    int num;

    showchoose();
    printf("Please enter the limit:\n");
    printf("Lower limit is a: ");
    scanf("%d", &a);
    printf("Upper limit is b: ");
    scanf("%d", &b);
    num = int_choose(a, b);
    printf("choose is %d.\n", num);
    printf("Bye!\n");

    return 0;
}
