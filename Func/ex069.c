#include<stdio.h>
main() {
	int sum, cut, num;
	printf("��������́F");
	sum = 0; cut = 0;
	while (scanf("%d", &num) != EOF){
		sum += num;
		cut++;
		printf("���������:");
	}

	printf("���v��%d  ���ρ�%.2f\n", sum, (float)sum / cut);


}