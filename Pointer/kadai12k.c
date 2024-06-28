#include<stdio.h>
main() {
	char m1[] = { "mikan to ringo" };
	char m2[50];
	char*p1,*p2;
	int c = 0 ,i;
	p1 = m1,p2=m2;
	printf("‹ó”’‚ğœ‚¢‚½”z—ñ“à—e= ");
	while (*p1!='\0') {
		if (*p1 !=' '){
			*p2 = *p1;
			p2++;
			c++;

		}
		p1++;
	}

	p1 = m1, p2 = m2;
	for (i = 0; i < c; i++) {
		putchar(*p2++);
	}
}