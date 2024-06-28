#include<stdio.h>
main()
{
	int a, b, c,ret;
	printf("数値を３つ入力：");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret:%d\ta:%d\tb:%d\tc:%d\n", ret, a, b, c);

	printf("数値を一つ入力（ｃｔｒｌ+ｚで終了）");
	while (scanf("%d", &a) != E0F) {
		printf("数値：%d\n", a);
		printf("printf("整数を入力(Ctrl+Zで終了) a:");


	}


}