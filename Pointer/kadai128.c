#include<stdio.h>
main() {
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa,*pb;
	printf("”z—ñb[]=");
	pa = a, pb = b;
	while (*pa != 0) {
		*pb += *pa;
		printf("%d ", *pb);
		pa++, pb++;
		if (*pa == 0)break; {
			printf(",");
		}
			
	}

}