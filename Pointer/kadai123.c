#include<stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	p_a = &a, p_b = &b;
	printf("実数値１？");
	scanf("%lf", &a);
	printf("実数値２？");
	scanf("%lf", &b);
	if (*p_a < *p_b) {
		printf("大きいほうは＝%lf\n", *p_b);
	}
	else {
		if (*p_a < *p_b) {
			printf("大きいほうは＝%lf\n", *p_a);
		}
	}
}