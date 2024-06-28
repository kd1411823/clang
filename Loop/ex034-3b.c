#include <stdio.h>
main()
{
	int j, i, num;
	printf("”‚ÍH");
	scanf("%d", &num);

	i = 1;
		do {
			j = 0;
			do {
				printf("*");
				j++;
			} while (j < i);
			printf("\n");
			i++;
		} while (i <=num);

}