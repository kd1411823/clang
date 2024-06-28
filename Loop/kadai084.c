#include<stdio.h>
main()
{
	int i = 0, g = 0;
	while (i,g != -999) {
		printf("整数1（-９９９）で終了？");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("整数2（-９９９）で終了？");
		scanf("%d", &g);
		if (g == -999) {
			break;
		}
		if (g == 0) {
			continue;
		}
		printf("%d / %d = %d あまり%d\n", i , g,i/g , i % g);
		
		
		

	}
	
}