#include<stdio.h>
main()
{
	int i,g,k;
	i = 0, g = 0, k= 0;
	do{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &i);
		if (i != -999) {
			g += i;
			k++;
		}
	} while (i !=-999);
	printf("‡Œv%d\n", g);
	printf("•½‹Ï%f\n", (float)g / k);

}