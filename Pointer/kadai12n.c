#include<stdio.h>
main() {
	char* p = "Nippon";
	int c=0,i;
	while (*p!='\0') {
		p++;
		c++;
	}
	
	printf("�t���ɕ\�������");
	for (i = 0;i<=c; i++) {
		putchar(*p);
			p--;
	}
}