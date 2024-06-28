#include <stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%c", &i);

	if ('A' <= i && 'Z' >= i) {
		printf("その文字は「大文字です」");
	}
	else {
		if ('a' <= i && 'z' >= i) {
			printf("その文字は「小文字です」");
		}
		else {
			printf("ERROR");
		}
	}
}