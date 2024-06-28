#include<stdio.h>
main() {
	double data[5] = { 10.8,20.3,30.6,40.4,50.5};
	double g = 0;
	double* pdata;
	int i;

	pdata = data;
	printf("”z—ñ@data[]=");
	for (i = 0; i < 5; i++) {
		g += *pdata;
		printf("%f  ", *pdata);
		pdata++;
		

	}
	printf("\n‡Œv%.3f\n",g);
	printf("•½‹Ï%.3f\n", g / 5);
}