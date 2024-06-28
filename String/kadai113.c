#include<stdio.h>
main() {
	char moji[] = "gamesoft";
	int i = 0;
	while (moji[i]!='\0')
	{
		i++;
	}
	printf("•¶š—ñ‚ÍH@%s\n", &moji[0]);
	printf("•¶š”F%d•¶š\n",i);
}