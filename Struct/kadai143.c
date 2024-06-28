#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit sss = { "peach",300,5,3,0};
	int i;
	sss.total = sss.price * sss.number;
	printf("商品名：　%s\n", sss.name);
	printf("価格：　%d円\n", sss.price);
	printf("お薦め度：   ");
	for (i = 0; i < sss.point; i++) {
		printf("★");
	}

	printf("\n個数：　%d\n", sss.number);
	printf("金額：　\\%d-\n", sss.total);
}