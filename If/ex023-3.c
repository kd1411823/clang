#include <stdio.h>
main()
{
	int su1, su2, no, r1;
	printf("演算子を入力:");
	scanf("%d", &no);

	printf("２つの整数を入力:");
	scanf("%d%d", &su1, &su2);

	if (no == 4) {
		printf("結果%d\n", r1 = su1 / su2);
	}
	else{
		if (no == 3) {
			printf("結果%d\n", r1 = su1 * su2);
		}
		else {
			if (no == 2) {
				printf("結果%d\n", r1 = su1 - su2);
			}
			else{
				if (no == 1) {
					printf("結果%d\n", r1= su1 + su2);
				}
			}
			
		}
	}
}