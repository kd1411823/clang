#include <stdio.h>
main()
{
	int i,k;
	for (i = 1, k = 0; i <= 10; i++) {
		k += i;
		printf("1から%dまでの和=%d\n", i, k);
	}
}