#include <stdio.h>
main()
{
	int num,c1;
	printf("��������:");
	scanf("%d", &num);
	c1 = 0;
	while (num>c1) {
		printf("*");
		c1++;
	}
}