#include <stdio.h>
main()
{
	char tuki;
	printf("月を入力:");
	scanf("%c", &tuki);

	if (tuki == '2') {
		printf("最終日は29日です\n");
	}
	else {
		if (tuki == '4' || tuki == '6' || tuki == '9' || tuki == '11') {
			printf("最終日は30日です\n");
		}
		else {
			printf("最終日は３１日です\n");
		}
	}
}