#include <stdio.h>
main()
{
	float ia,ib;
	printf("２つの実数値？");
	scanf("%f%f", &ia,&ib);

	if (ia > ib) {
		printf("大きいほうは=%f\n", ia);
	}
	else {
		if (ia < ib) {
			printf("大きいほうは=%f\n", ib);
		}
	}

}