#include <stdio.h>
main()
{
	char moji,moji2;
	printf("���������:");
	scanf("%c", &moji);

	if (moji >= 'a' && moji <= 'z') {
		printf("�ϊ������%c\n", moji2 = moji - 0x20);
	}
	else {
		if (moji >= 'A' && moji <= 'Z') {
			printf("�ϊ������%c\n", moji2 = moji + 0x20);
		}
		else {


			printf("�G���[���b�Z�[�W");
		}
	}
}