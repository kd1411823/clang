#include <stdio.h>
main()
{
	char i;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &i);

	if ('A' <= i && 'Z' >= i) {
		printf("���̕����́u�啶���ł��v");
	}
	else {
		if ('a' <= i && 'z' >= i) {
			printf("���̕����́u�������ł��v");
		}
		else {
			printf("ERROR");
		}
	}
}