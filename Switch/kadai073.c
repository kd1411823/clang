#include <stdio.h>
main()
{
	char ope;
	int d10;
	printf("10�i���̐����H");
	scanf("%d", &d10);

	printf("�A���t�@�x�b�g(o or h or d)�H:");
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