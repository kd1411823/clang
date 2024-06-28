#include<stdio.h>
main() {
	int i;
	char moji;
	printf("アルファベット小文字？");
	scanf("%s", &moji);

	if (moji >= 'a' && moji < 'z') {
		for (i = ++moji; i <= 'z'; i++, moji++) {
			printf("%c ", moji - 0x20);
		}
	}
}