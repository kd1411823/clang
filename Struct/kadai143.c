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
	printf("���i���F�@%s\n", sss.name);
	printf("���i�F�@%d�~\n", sss.price);
	printf("���E�ߓx�F   ");
	for (i = 0; i < sss.point; i++) {
		printf("��");
	}

	printf("\n���F�@%d\n", sss.number);
	printf("���z�F�@\\%d-\n", sss.total);
}