#include<stdio.h>
main() {
	char a[20];
	int s,i,j=0;
	printf("回数と文字列を入力");
	scanf("%d%s", &s, a);
	printf("\n");
	for (i = 0; i < s; i++) {
		printf("%s   ", a);
		
	}
}