#include <stdio.h>
main()
{
	int su1;
	printf("�O����P�O�O�܂ł̐����H:");
	scanf("%d", &su1);

	if (su1>=90) {
		printf("���̐��l�̌��ʂ́u5�v�ł�\n");
	}
	else {
		if (su1 >= 80) {
			printf("���̐��l�̌��ʂ́u4�v�ł�\n");
		}
		else {
			if (su1 >= 50) {
				printf("���̐��l�̌��ʂ́u3�v�ł�\n");
			}
			else {
				if (su1 >= 30) {
					printf("���̐��l�̌��ʂ́u2�v�ł�\n");
				}
				else {
					printf("���̐��l�̌��ʂ́u1�v�ł�\n");
				}
			}
		}
	}
}