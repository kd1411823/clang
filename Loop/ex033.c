#include <stdio.h>
main()
{
	int su1, su2, i;
	printf("数は？");
	scanf("%d", &su1);

	for (su2 = 0, i = 0; su1 != -999; i++;) {
		su2 += su1;
		printf("数は？");
		scanf("%d", &su1);

	}
	if (i != 0) {
		printf("合計=%d  平均=%.2f", su2, (float)su2 / i);


	}

}