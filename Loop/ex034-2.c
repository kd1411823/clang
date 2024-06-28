#include <stdio.h>
main()
{
	int su1,i;
	printf("”‚ÍH");
	scanf("%d", &su1);

	do {
		i= 0;
		do{
		printf("*");
		i++;
	} while (i < 5);
	printf("\n");
		su1--;
	} while (su1 > 0);
	
}