#include<stdio.h>
main()
{
	int k,i,g;
	k = 0, g = 0;

	printf("����(-999�ŏI��)?");
	scanf("%d", &i);

	while (i != -999){
		g += i;
		printf("����(-999�ŏI��)?");
		scanf("%d", &i);
		k++;
	}
	printf("���v��%d", g);
	printf("���ρ�%.2f",(float)g / k);
}