#include <stdio.h>
main()
{
	int num,c1;
	printf("数を入れて:");
	scanf("%d", &num);
	c1 = 0;
	while (num>c1) {
		printf("*");
		c1++;
	}
}