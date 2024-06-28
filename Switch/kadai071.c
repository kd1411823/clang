#include<stdio.h>
main()
{
	int d1, d2;
	char e;

	printf("®”‚PH");
	scanf("%d",&d1);

	printf("®”‚QH");
	scanf("%d",&d2);

	printf("‰‰ZqH");
	scanf(" %c",&e);

	switch (e){
	case'+':printf("%d + %d =%d\n",d1,d2,d1+d2);
		break;
	case'-':printf("%d - %d =%d\n", d1, d2, d1-d2);
		break;
	case'*':printf("%d * %d =%d\n", d1, d2, d1*d2);
		break;
	case'/':printf("%d / %d =%d\n", d1, d2, d1/d2);
		break;
	case'%':printf("%d / %d =%d‚ ‚Ü‚è%d\n", d1, d2, d1/d2,d1%d2);
		break;
	
	}
}