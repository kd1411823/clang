#include<stdio.h>
main() {
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int c[30];
	int* pa, * pb, * pc;

	pa = a, pb = b, pc = c;
	printf("---���s�O---\n");
	printf("�z��a[]=");
	while (*pa != 0) {
		printf("%d ", *pa);
		pa++;
		if (*pa == 0)break; {
			printf(",");
		}
	}
	printf("\n---���s��---\n");
	
	printf("�z��a[]=");
	while (*pb != 0) {
		*pa += *pb++;
		
		pa++;
		
	}
	pa = a, pb = b, pc = c;
	
	while (*pa != 0) {
		printf("%d ", *pa);
		pa++;
		if (*pa == 0)break; {
			printf(",");
		}
	}
}
	