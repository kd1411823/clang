#include <stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;

	printf("�T���ls�����");
	scanf("%d", &s);
	
	for (d[10]=s,i = 0; s!=d[i]; i++) {
			
	}
	if (i == 10) {
		printf("������Ȃ�����");
	}
	else {
		printf("�T���l%d���Ad[%d]�Ŕ���!\n", s, i);
	}
}