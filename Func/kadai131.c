#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	printf("\n����^z�ŏI��");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		gets(dumy);

		
		
		printf("\n����^z�ŏI��");
		c = getchar();
		
	}
}