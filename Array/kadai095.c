#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int i,g;
	g = 0;
	printf("�z��a�� ");
	for (i = 0; i < 10; i++) {
		printf(" %d ", a[i]);
		g += a[i];
	}
	printf("\n���v��%d   ���ρ�%d\n",g,g/10);
	g = 0;
	printf("�z��b�� ");
	for (i = 0; i < 10; i++) {
		printf(" %d ", b[i]);
		g += b[i];
	}
	printf("\n���v��%d   ���ρ�%d\n", g, g / 10);
}