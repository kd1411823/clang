#include <stdio.h>
main()
{
	char data[]= "Apple";
	int i=0;
	
		printf("1�������\��\n");

		while (data[i] != '\0') {
			printf("%c", data[i]);
			i++;
		}
		printf("\n�������\��\n");
		printf("%s\n", &data[0]);

}