#include<stdio.h>
main()
{
	int s;
	s = 0;
	while (s != -999) {
		printf("�����i-999�œ��͏I��)?");
		scanf("%d", &s);
		if (s != -999) {
			printf("�W�i����%o�@�P�U�i����%x\n", s, s);
		}
	}


}