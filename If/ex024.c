#include <stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);

	if ('A' <= moji && 'Z' >=moji) {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}

}