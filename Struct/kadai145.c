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


		printf("���i���F�@%s\n", sss[i].name);
		printf("���i�F�@%d�~\n", sss[i].price);
		printf("���E�ߓx�F   ");
		for (j = 0; j< sss[i].point; j++) {
			printf("��");
		}

		printf("\n���F�@%d\n", sss[i].number);
		printf("���z�F�@%d-\n", sss[i].total);
	}
	printf("���v���z��'\' %d-\n", total);

}