#include<stdio.h>
main() {
	int i;
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%s", &moji);

	if (moji >= 'a' && moji < 'z') {
		for (i = ++moji; i <= 'z'; i++, moji++) {
			printf("%c ", moji - 0x20);
		}
	}
}