#include <stdio.h>
main()
{
	int j, i,num;
	printf("���́H");
	scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
		j++;
		} while (j<i+1);
		printf("\n");
	i++;
	} while (i < num);

}