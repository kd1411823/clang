#include<stdio.h>
main() {
	char moji[] = "gamesoft";
	int i = 0;
	while (moji[i]!='\0')
	{
		i++;
	}
	printf("文字列は？　%s\n", &moji[0]);
	printf("文字数：%d文字\n",i);
}