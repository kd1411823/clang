#include <stdio.h>
main()
{
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;

	printf("�T���ls�����");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("������Ȃ�����");
	}
	else {
		printf("�T���l%d���Ad[%d]�Ŕ���!\n", s,i);
	}
}