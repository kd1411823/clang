#include<stdio.h>
main() {
	char data[15] = "Language";
	char* pdata,ch;
	int i;
	pdata = data;
	printf("検索文字は？");
	scanf("%c", &ch);
	printf("検索結果は、");
	for (i = 0; *(pdata + i) != '\0'; i++) {
		if (ch == *(pdata + i)) {
			printf("%d", i + 1);
		}
	}
	printf("です\n");
}