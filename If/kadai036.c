#include <stdio.h>
main()
{
	int su1, su2, sum;
	printf("整数１？");
	scanf("%d", &su1);
	printf("整数2？");
	scanf("%d", &su2);

	if (su1 > su2) {
		printf("%dの方が%dより%d大きい", su1, su2, su1 - su2);
	}
	else {
		if (su1 < su2) {
			printf("%dの方が%dより%d小さい", su1, su2, su1 - su2);
		}
		else {
			if (su1 == su2) {
				printf("%dと%dは等しい", su1, su2);
			}
		}
	}
}