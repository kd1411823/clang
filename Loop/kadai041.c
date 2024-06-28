#include<stdio.h>
main()
{
	int k,i,g;
	k = 0, g = 0;

	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &i);

	while (i != -999){
		g += i;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &i);
		k++;
	}
	printf("‡Œv%d", g);
	printf("•½‹Ï%.2f",(float)g / k);
}