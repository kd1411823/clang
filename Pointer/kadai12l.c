#include<stdio.h>
main() {
	char moji1[10];
	char* p;
	int c=0;
	p = moji1;
	printf("������H");
	gets(p);
	
	
	while (*p != '\0') {
		p++;
		c++;
	}
	printf("�������́A%d �����ł�", c);
}