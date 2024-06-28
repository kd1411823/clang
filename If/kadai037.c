#include <stdio.h>
main()
{
	int su1;
	printf("０から１００までの整数？:");
	scanf("%d", &su1);

	if (su1>=90) {
		printf("その数値の結果は「5」です\n");
	}
	else {
		if (su1 >= 80) {
			printf("その数値の結果は「4」です\n");
		}
		else {
			if (su1 >= 50) {
				printf("その数値の結果は「3」です\n");
			}
			else {
				if (su1 >= 30) {
					printf("その数値の結果は「2」です\n");
				}
				else {
					printf("その数値の結果は「1」です\n");
				}
			}
		}
	}
}