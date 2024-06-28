#include<stdio.h>
main() {
	char moji[20];
	int i = 0;
	printf("•¶š—ñ‚ÍH", &moji[0]);
	scanf("%s", &moji[0]);
	while (moji[i] != '\0')
	{
		putchar(moji[i]);
		printf("\n");
		i++;
	}
	
}