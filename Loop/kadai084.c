#include<stdio.h>
main()
{
	int i = 0, g = 0;
	while (i,g != -999) {
		printf("����1�i-�X�X�X�j�ŏI���H");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("����2�i-�X�X�X�j�ŏI���H");
		scanf("%d", &g);
		if (g == -999) {
			break;
		}
		if (g == 0) {
			continue;
		}
		printf("%d / %d = %d ���܂�%d\n", i , g,i/g , i % g);
		
		
		

	}
	
}