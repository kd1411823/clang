#include <stdio.h>
main()
{
	char e;
	printf("１文字入力？");
	scanf("%c", &e);

	if (e >= 'A' && e<='Z') {
		printf("変換結果は%c\n", e + 0x20);
	}
	else {
		if (e >= 'a' && e <= 'z') {
			printf("変換結果は%c\n", e - 0x20);
		}
		else {
			printf("変換結果は%c\n", e);
		}
	}
}