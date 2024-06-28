#include<stdio.h>
main() {
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i = 0, j = 0;
	for (i = 0; i < 7; i++) {
		
		for (j=0;j<3;j++) {
			putchar(day[i][j]);
			
		}
		day[i][j] = '\0';
		printf("\n");

	}
}