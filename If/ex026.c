#include <stdio.h>
main()
{
	char tuki;
	printf("�������:");
	scanf("%c", &tuki);

	if (tuki == '2') {
		printf("�ŏI����29���ł�\n");
	}
	else {
		if (tuki == '4' || tuki == '6' || tuki == '9' || tuki == '11') {
			printf("�ŏI����30���ł�\n");
		}
		else {
			printf("�ŏI���͂R�P���ł�\n");
		}
	}
}