#include <stdio.h>
main()
{
	float su1, su2, su3,gokei,heikin;
	printf("��ڂ̐���:");
	scanf("%f",&su1);
	printf("��ڂ̐���:");
	scanf("%f", &su2);
	printf("�O�ڂ̐���:");
	scanf("%f",&su3);
	gokei = su1 + su2 + su3;
	printf("���v=%f", gokei);
	printf("����=%f", gokei / 3);

}