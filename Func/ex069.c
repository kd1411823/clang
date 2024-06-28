#include<stdio.h>
main() {
	int sum, cut, num;
	printf("®”‚ğ“ü—ÍF");
	sum = 0; cut = 0;
	while (scanf("%d", &num) != EOF){
		sum += num;
		cut++;
		printf("®”‚ğ“ü—Í:");
	}

	printf("‡Œv%d  •½‹Ï%.2f\n", sum, (float)sum / cut);


}