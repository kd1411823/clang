#include <stdio.h>
main()
{
	int num;

	printf("整数を入力:");
	scanf("%d", &num);


	if (num >= 10 && num <= 49) {
		switch (num/10)  {
		case 1:printf("１０点台です\n");
			break;
		case 2:printf("２０点台です\n");
			break;
		case 3:printf("３０点台です\n");
			break;
		case 4:printf("４０点台です\n");
			break;
		}
	}
	else {
		printf("エラーメッセージ\n");
	}
}