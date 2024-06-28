#include <stdio.h>
main()
{
	char moji,moji2;
	printf("文字を入力:");
	scanf("%c", &moji);

	if (moji >= 'a' && moji <= 'z') {
		printf("変換すると%c\n", moji2 = moji - 0x20);
	}
	else {
		if (moji >= 'A' && moji <= 'Z') {
			printf("変換すると%c\n", moji2 = moji + 0x20);
		}
		else {


			printf("エラーメッセージ");
		}
	}
}