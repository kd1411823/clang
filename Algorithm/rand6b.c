#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int ja, i;
	printf("何を出しますか？\n(1:グー　2:チョキ　3:パー)");
	scanf("%d", &ja);

	srand(time(0));

	i = rand() % 3;

	ja -= 1;

	if (ja == 0) {
		printf("プレイヤーはグーです\n");
	}
	if (ja == 1) {
		printf("プレイヤーはチョキです\n");
	}
	if (ja == 2) {
		printf("プレイヤーはパーです\n");
	}

	
	
	if (i == 0) {
		printf("コンピューターはグーです\n");
	}
	if (i== 1) {
		printf("コンピューターはチョキです\n");
	}
	if (i == 2) {
		printf("コンピューターはパーです\n");
	}
	　
	if (ja == i ) {
		printf("引き分け\n");
	}
	if ((ja+1)%3==i ) {
		printf("プレイヤーの勝ち\n");
	}
	if ((ja+ 1)%3==i) {
		printf("コンピューターの勝ち\n");
	}
	


}