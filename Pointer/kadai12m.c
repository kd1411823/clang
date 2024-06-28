#include<stdio.h>
main() {
	char str1[128];
	char str2[128];
	char* p1, * p2;
	p1 = str1, p2 = str2;
	printf("•¶š—ñ‚PH");
	scanf("%s", str1);
	printf("•¶š—ñ2H");
	scanf("%s", str2);
	while (*p1 != '\0') {
		p1++;
	}
	
	while (*p2 != '\0') {
		*p1 = *p2;
		p1++,p2++;
	}
	*p1 = '\0';
	p1 = str1, p2 = str2;
	printf("str1: ");
	while (*p1 != '\0') {
		putchar(*p1++);
		
	}
	printf("\n");
}