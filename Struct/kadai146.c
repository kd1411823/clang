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
	struct furuit* p;
	for (i = 0; i < 3; i++) {
		(p+i)->total = (p + i)->price * (p + i)->number;
		total += (p + i)->total;


		printf("���i���F�@%s\n", (p + i)->name);
		printf("���i�F�@%d�~\n", (p + i)->price);
		printf("���E�ߓx�F %d�|�C���g\n  ", (p + i)->);
		for (j = 0; j< (p + i)->point; j++) {
			printf("��");
		}

		printf("\n���F�@%d\n", (p + i)->number);
		printf("���z�F�@%d-\n", (p + i)->total);
	}
	printf("���v���z��%d-\n", total);

}