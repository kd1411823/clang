#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int ja, i;
	printf("�����o���܂����H\n(1:�O�[�@2:�`���L�@3:�p�[)");
	scanf("%d", &ja);

	if (ja == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (ja == 2) {
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (ja == 3) {
		printf("�v���C���[�̓p�[�ł�\n");
	}

	srand(time(0));

		i = rand() % 3;
	
	if (i == 0) {
		printf("�R���s���[�^�[�̓O�[�ł�\n");
	}
	if (i== 1) {
		printf("�R���s���[�^�[�̓`���L�ł�\n");
	}
	if (i == 2) {
		printf("�R���s���[�^�[�̓p�[�ł�\n");
	}
	�@
	if (ja == 1 && i == 0) {
		printf("��������\n");
	}
	if (ja == 1 && i == 1) {
		printf("�v���C���[�̏���\n");
	}
	if (ja == 1 && i == 2) {
		printf("�R���s���[�^�[�̏���\n");
	}
	if (ja == 2 && i == 1) {
		printf("��������\n");
	}
	if (ja == 2 && i == 0) {
		printf("�R���s���[�^�[�̏���\n");
	}
	if (ja == 2 && i == 2) {
		printf("�v���C���[�̏���\n");
	}
	if (ja == 3 && i == 2) {
		printf("��������\n");
	}
	if (ja ==  3&& i == 1) {
		printf("�R���s���[�^�[�̏���\n");
	}
	if (ja == 3 && i == 0) {
		printf("�v���C���[�̏���\n");
	}


}