#include<stdio.h>
main() {
	char moji1[] = "ringo";
	char moji2[20];
	char* p1, * p2;
	int i=0,j;
	p1 = moji1, p2 = moji2;
	printf("�z����e��");
	while (*p1) {
		putchar(*p1++);
		i++;
	}
	printf("\n�t�Z���ʁ�");
	for (j = 0; j <= i; j++) {
		*p2 = *p1--;
		putchar(*p2++);
	}
	printf("\n");
	

}