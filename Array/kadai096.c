#include<stdio.h>
main()
{
	int c[10];
	int i = 0, j;

	while (c[i] != -999)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &c[i]);
		if (c[i] == -999) {
			continue;
		}
		i++;


	}
	j = i;
	printf("�z��c �� ");
	for (i = 0;i < j; i++) {
			printf(" %d ", c[i]);
		}
}