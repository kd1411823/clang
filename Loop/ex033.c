#include <stdio.h>
main()
{
	int su1, su2, i;
	printf("”‚ÍH");
	scanf("%d", &su1);

	for (su2 = 0, i = 0; su1 != -999; i++;) {
		su2 += su1;
		printf("”‚ÍH");
		scanf("%d", &su1);

	}
	if (i != 0) {
		printf("‡Œv=%d  •½‹Ï=%.2f", su2, (float)su2 / i);


	}

}