#include<stdio.h>
main() {
	char data[15] = "Language";
	char* pdata,ch;
	int i;
	pdata = data;
	printf("���������́H");
	scanf("%c", &ch);
	printf("�������ʂ́A");
	for (i = 0; *(pdata + i) != '\0'; i++) {
		if (ch == *(pdata + i)) {
			printf("%d", i + 1);
		}
	}
	printf("�ł�\n");
}