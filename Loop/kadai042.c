#include<stdio.h>
main()
{
	int i,g;
	i = 0, g = 0;;
	while (g<=300){

		i++;
		g += i;
		printf("%d", i);
		if (g <= 300) {
			printf("+");
		}
	}
	printf("=%d", g);
}