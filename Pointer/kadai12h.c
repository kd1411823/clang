#include<stdio.h>
main() {
	char moji[] = "kadai12h.c";
	char* pm;
	pm = moji;
	printf("�z����e��");
	while (*pm) {
		
		putchar(*pm++);
	}
}