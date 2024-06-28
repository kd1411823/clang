#include<stdio.h>
main()
{
	int i=0, g=0, k=0;
	while (i != -999) {
		printf("整数（-９９９）で終了？");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		g += i;
		k++;

	}
	printf("合計＝%d\n", g);
	printf("平均＝%.3f", (float)g / k);
}