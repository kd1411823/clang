#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;

	cnt = 0;
		while (str[cnt] !='\0')
		{
			cnt++;
		}
		printf("文字列:%s\n",str);
		printf("文字数は%d文字\n", cnt);
	

}