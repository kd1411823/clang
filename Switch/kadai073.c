#include <stdio.h>
main()
{
	char ope;
	int d10;
	printf("10進数の整数？");
	scanf("%d", &d10);

	printf("アルファベット(o or h or d)？:");
	scanf(" %c", &ope);

	switch (ope) {
	case'o':printf("%o\n",d10);
		break;
	case'h':printf("%x\n", d10);
		break;
	default:
		printf("%d\n", d10);
	

	}
}