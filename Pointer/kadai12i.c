#include<stdio.h>
main() {
	char moji1[] = "mikan";
	char moji2[20];
	char*p1,*p2;
	p1 = moji1,p2=moji2;
	printf("ƒRƒs[æ‚Ì•¶š—ñ");
	while (*p2++ = *p1++); 
	p2 = moji2;
	while (*p2) {
		putchar(*p2++);
	}
	
}