#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i, g;
	printf("”z—ña = ");
	for (i = 0, g = 9; i <10; i++,g--) {
		c[g] = a[i];
		printf(" %d ", a[i]);
	}
	printf("\n”z—ñc = ");
	for (g = 0; g <10; g++) {
		printf(" %d ", c[g]);
	}
}