#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;

	srand(time(0));


	i = rand() % 100+1;
	
	if (i <= 30) {
		printf("かいしんのいちげき！\n");
	}
	else {
		printf("通常攻撃\n");
	}
}