#include <stdio.h>
main()
{
	int i,b;
	printf("数を入れて:");
	scanf("%d", &b);

	for (i = 1; i <= 5; i++) {
		printf("%d ",b*i);
	}
}