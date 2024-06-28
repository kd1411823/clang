#include<stdio.h>
main() {
	char moji1[20], moji2[20];
	int i = 0,j=0;
	printf("ï∂éöóÒ1ÅH", &moji1[0]);
	scanf("%s", &moji1[0]);
	printf("ï∂éöóÒ2ÅH", &moji2[0]);
	scanf("%s", &moji2[0]);
	while (moji1[i] != '\0')
	{
		i++;
	}
	
	while (moji2[j]!='\0')
	{
		moji1[i] = moji2[j];
			j++;
		i++;

	}
	moji1[i] = '\0';
	
	
	
	printf("%s\n", &moji1[0]);
}