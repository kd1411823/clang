#include<stdio.h>
main() {
	int i;
	char moji;
	printf("アルファベット小文字？");
	scanf("%s", &moji);


	for (i = ++moji; i <= 'z'; i++, moji++) {
		printf("%c ",moji);
	}
}