// s_gets() 函数
char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;

	ret_vel = fgets(st, n, stdin);
	if (ret_val)	// 即， ret_val != NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
		{
			i++;
		}
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
