// file_echo.c -- 打开一个文件并显示该文件
#include <stdio.h>
#include <stdlib.h>		//为了使用exit()

int main()
{
	int ch ;
	FILE * fp;
	char fname[50];		//存储文件名
	
	printf("Please Enter the name of the file:");
	scanf("%s",fname);
	fp = fopen(fname, " r");	//打开待读取文件
	if (fp == NULL)
	{
		printf("Failed to open the file.Bye\n");
		exit(1);		//推出程序
	}
	//getc(fp) 从打开的文件中获取一个字符
	while ((ch == getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);			//关闭文件

	return 0;
}
