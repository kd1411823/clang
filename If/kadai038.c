#include <stdio.h>
main()
{
	char e;
	printf("�P�������́H");
	scanf("%c", &e);

	if (e >= 'A' && e<='Z') {
		printf("�ϊ����ʂ�%c\n", e + 0x20);
	}
	else {
		if (e >= 'a' && e <= 'z') {
			printf("�ϊ����ʂ�%c\n", e - 0x20);
		}
		else {
			printf("�ϊ����ʂ�%c\n", e);
		}
	}
}