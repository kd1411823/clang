#include<stdio.h>
main() {
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int j=0, i;
	int* pdata;

	pdata = data;
	printf("data[]=");
	for (i = 0; i < 9; i++) {
		printf("%d   ",pdata[i]);
	}
	printf("\n");
	for (i = 0; i < 9; i++) {
		if (data[i] > j) {
			j = data[i];
		}
	}
	printf("Å‘å’l%d\n", j);
	j = 999;
	for (i = 0; i < 9; i++) {
		if (data[i] < j) {
			j = data[i];
		}
	}
	printf("Å¬’l%d\n", j);

	
	
}
 













