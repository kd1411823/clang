#include<stdio.h>
void display1(int n);
void display2(int *n2);
main() {
	int a, b;
	printf("���la?:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("���lb?:");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}

void display1(int n) {
	printf("���la�́A%d�ł��B\n", n);
	n += 10;
	return;
}

void display2(int *n2) {
	printf("���lb�́A%d�ł��B\n", *n2);
	*n2 += 10;
	return;
}
