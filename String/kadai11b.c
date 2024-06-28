#include<stdio.h>
main() {
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i = 0, j = 0,s;
	printf("”’l‚ÍH(0`6)");
	scanf("%d", &s);
	i = s;
		while (day[i][j] != '\0') {
			putchar(day[i][j]);
			j++;
		}
		day[i][j] = '\0';
		printf("\n");

	
}