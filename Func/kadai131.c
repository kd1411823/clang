#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	printf("\n文字^zで終了");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		gets(dumy);

		
		
		printf("\n文字^zで終了");
		c = getchar();
		
	}
}