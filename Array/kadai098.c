#include<stdio.h>
main() {
	int syo, dai, ssyou, sdai,i;
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	printf("”z—ñdata[]=");
	for (i = 0; i < 10; i++) {
		printf(" %d ", data[i]);
	}
	
	for (i = 0,sdai=999; i < 10; i++) {
		if (sdai > 999 - data[i]) {
			sdai = 999-data[i];
			dai = data[i];
		}
		
	}
	printf("\nÅ‘å’l%d    ", dai);
	for (i = 0, ssyou = 999; i < 10; i++) {
		if (ssyou >  data[i]) {
			ssyou =  data[i];
			syo = data[i];
		}

	}
	printf("\nÅ¬’l%d    ", syo);
}