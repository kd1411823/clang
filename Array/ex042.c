#include <stdio.h>
main()
{
	char data[]= "Apple";
	int i=0;
	
		printf("1文字ずつ表示\n");

		while (data[i] != '\0') {
			printf("%c", data[i]);
			i++;
		}
		printf("\n文字列を表示\n");
		printf("%s\n", &data[0]);

}