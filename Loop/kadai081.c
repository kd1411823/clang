#include<stdio.h>
main()
{
	int i=0, g=0, k=0;
	while (i != -999) {
		printf("�����i-�X�X�X�j�ŏI���H");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		g += i;
		k++;

	}
	printf("���v��%d\n", g);
	printf("���ρ�%.3f", (float)g / k);
}