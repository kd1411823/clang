#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int ja, i;
	printf("�����o���܂����H\n(1:�O�[�@2:�`���L�@3:�p�[)");
	scanf("%d", &ja);

	srand(time(0));

	i = rand() % 3;

	ja -= 1;

	if (ja == 0) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (ja == 1) {
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (ja == 2) {
		printf("�v���C���[�̓p�[�ł�\n");
	}

	
	
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
	if (ja == i ) {
		printf("��������\n");
	}
	if ((ja+1)%3==i ) {
		printf("�v���C���[�̏���\n");
	}
	if ((ja+ 1)%3==i) {
		printf("�R���s���[�^�[�̏���\n");
	}
	


}