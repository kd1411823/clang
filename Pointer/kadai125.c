#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata;
	int i;
	pdata = data;
	printf("ポインタを固定で表示\n");
	for (i = 0; i < 8; i++) {
		printf("%d \n", pdata[i]);
	}
	printf("ポインタを変化させて表示\n");
	for (i = 0; i < 8; i++) {
		printf("%d \n", *pdata++);
	}

}