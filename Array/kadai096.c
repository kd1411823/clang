#include<stdio.h>
main()
{
	int c[10];
	int i = 0, j;

	while (c[i] != -999)
	{
		printf("Ž(-999ĹIš)H");
		scanf("%d", &c[i]);
		if (c[i] == -999) {
			continue;
		}
		i++;


	}
	j = i;
	printf("zńc  ");
	for (i = 0;i < j; i++) {
			printf(" %d ", c[i]);
		}
}