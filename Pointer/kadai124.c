#include<stdio.h>
main() {
	char c, * p_c;
	p_c = &c;
	printf("1�������́H");
	scanf("%c", &c);
	
	printf("���̕�����  %c ",++*p_c);
}