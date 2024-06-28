#include<stdio.h>
main()
{
	int d,i;
	for (i = 1,d = 32; d <= 126; i++, d++) {
		printf("%x  %c    ", d, d);
		if (i % 10 == 0) {
			printf("\n");
		}
		
	}
}