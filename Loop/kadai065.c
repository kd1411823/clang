#include<stdio.h>
main()
{
	int i,g,k;
	i = 0, g = 0, k= 0;
	do{
		printf("����(-999�ŏI��)?");
		scanf("%d", &i);
		if (i != -999) {
			g += i;
			k++;
		}
	} while (i !=-999);
	printf("���v��%d\n", g);
	printf("���ρ�%f\n", (float)g / k);

}