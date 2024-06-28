#include<stdio.h>
main()
{
	int h, k, i;
	printf("     ");
	for (h = 1; h < 10; h++) {
		printf("%d  ", h);
	}
	printf("\n");
	printf("==============================\n");

	for (k = 1; k < 10; k++) {
		printf(" %d | ", k);
		for (i = 1; i < 10; i++) {
	      printf("%d ", k*i);
		}
		printf("\n");
	}
	
}