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
		printf("������:%s\n",str);
		printf("��������%d����\n", cnt);
	

}