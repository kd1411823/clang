#include<stdio.h>
main() {
	char moji[] = "gamesoft";
	int i = 0;
	while (moji[i]!='\0')
	{
		i++;
	}
	printf("������́H�@%s\n", &moji[0]);
	printf("�������F%d����\n",i);
}