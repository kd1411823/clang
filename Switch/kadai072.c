#include <stdio.h>
main()
{
	char ope;

	printf("アルファベット？:");
	scanf("%c", &ope);

	switch (ope) {
	case'a':printf("Ametica\nAustaralia\n");
		break;
	case'e':printf("England\n");
		break;
	case'f':printf("France\n");
		break;
	case'j':printf("Japan\n");
		break;
	
	}
}