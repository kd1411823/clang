#include <stdio.h>
main()
{
	int seireki;
	printf("西暦を入力：");
	scanf("%d",&seireki);
	if (seireki >= 1989) {
		printf("平成生まれです");
	}
	else {
		printf("昭和生まれです");
	}

}