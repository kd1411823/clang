#include <stdio.h>
main()
{
	int i;
	printf("�����H");
	scanf("%d", &i);

	if (i < 0) {
		printf("���͒l�́u�}�C�i�X�v�ł�");
	}
	else {
		if (i > 0) {
			printf("���͒l�́u�v���X�v�ł�");
		}
		else {
			if (i == 0) {
				printf("���͒l�́u0�v�ł�");
			}
		}
	}
}