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
	struct fruit sss[] = { {"peach",300,5,3,0}, {"grape",200,4,10,0}, {"wetermelon",1500,5,8,0} };
	int i,j,total = 0;
	for (i = 0; i < 3; i++) {
		sss[i].total = sss[i].price * sss[i].number;
		total += sss[i].total;


		printf("商品名：　%s\n", sss[i].name);
		printf("価格：　%d円\n", sss[i].price);
		printf("お薦め度：   ");
		for (j = 0; j< sss[i].point; j++) {
			printf("★");
		}

		printf("\n個数：　%d\n", sss[i].number);
		printf("金額：　%d-\n", sss[i].total);
	}
	printf("合計金額＝'\' %d-\n", total);

}