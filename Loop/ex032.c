#include <stdio.h>
main()
{
	int i,b;
	printf("��������:");
	scanf("%d", &b);

	for (i = 1; i <= 5; i++) {
		printf("%d ",b*i);
	}
}