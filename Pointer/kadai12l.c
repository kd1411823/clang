#include<stdio.h>
main() {
	char moji1[10];
	char* p;
	int c=0;
	p = moji1;
	printf("文字列？");
	gets(p);
	
	
	while (*p != '\0') {
		p++;
		c++;
	}
	printf("文字数は、%d 文字です", c);
}