#include <stdio.h>
main()
{
	int i,k;
	for (i = 1, k = 0; i <= 10; i++) {
		k += i;
		printf("1����%d�܂ł̘a=%d\n", i, k);
	}
}