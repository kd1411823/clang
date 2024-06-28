#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	int ja, i;
	printf("何を出しますか？\n(1:グー　2:チョキ　3:パー)");
	scanf("%d", &ja);

	if (ja == 1) {
		printf("プレイヤーはグーです\n");
	}
	if (ja == 2) {
		printf("プレイヤーはチョキです\n");
	}
	if (ja == 3) {
		printf("プレイヤーはパーです\n");
	}

	srand(time(0));

		i = rand() % 3;
	
	if (i == 0) {
		printf("コンピューターはグーです\n");
	}
	if (i== 1) {
		printf("コンピューターはチョキです\n");
	}
	if (i == 2) {
		printf("コンピューターはパーです\n");
	}
	　
	if (ja == 1 && i == 0) {
		printf("引き分け\n");
	}
	if (ja == 1 && i == 1) {
		printf("プレイヤーの勝ち\n");
	}
	if (ja == 1 && i == 2) {
		printf("コンピューターの勝ち\n");
	}
	if (ja == 2 && i == 1) {
		printf("引き分け\n");
	}
	if (ja == 2 && i == 0) {
		printf("コンピューターの勝ち\n");
	}
	if (ja == 2 && i == 2) {
		printf("プレイヤーの勝ち\n");
	}
	if (ja == 3 && i == 2) {
		printf("引き分け\n");
	}
	if (ja ==  3&& i == 1) {
		printf("コンピューターの勝ち\n");
	}
	if (ja == 3 && i == 0) {
		printf("プレイヤーの勝ち\n");
	}


}