#include <stdio.h>
main()
{
	char ope;

	printf("演算子をいれて:");
	scanf(" %c", &ope);

	switch (ope){
	case'+':printf("加算です\n");
		break;
	case'-':printf("減算です\n");
		break;
	case'*':printf("乗算です\n");
		break;
	case'/':printf("除算です\n");
		break;
	case'%':printf("あまりです\n");
		break;
	default:
		printf("その他です\n");
	}
}