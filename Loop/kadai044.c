#include<stdio.h>
main()
{
	int s;
	s = 0;
	while (s != -999) {
		printf("整数（-999で入力終了)?");
		scanf("%d", &s);
		if (s != -999) {
			printf("８進数＝%o　１６進数＝%x\n", s, s);
		}
	}


}