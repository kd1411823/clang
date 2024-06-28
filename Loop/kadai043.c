#include<stdio.h>
main()
{
	int s=0;
	
	while (s!=-1){
		printf("文字コード（-１）で入力終了");
		scanf("%d", &s);
		if (s != -1) {
			printf("%c\n", s);
		}
	}

}