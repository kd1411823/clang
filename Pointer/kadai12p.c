#include<stdio.h>
main() {
	char *day[] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	char* p;
	int j = 0;
	
		for(j=0;j<7;j++){
			p = day[j];
			while(*p!='\0'){
				putchar(*p++);
				
			}
			printf("\n");
		
		}
	
}