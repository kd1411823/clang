#include<stdio.h>
main() {
	char moji1[10];
	char* p;
	int c=0;
	p = moji1;
	printf("•¶š—ñH");
	gets(p);
	
	
	while (*p != '\0') {
		p++;
		c++;
	}
	printf("•¶š”‚ÍA%d •¶š‚Å‚·", c);
}