#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata;
	int i;
	pdata = data;
	printf("�|�C���^���Œ�ŕ\��\n");
	
	while(i!=-999) {
		printf("%d \n", pdata[i]);
		i++;
	}
	printf("�|�C���^��ω������ĕ\��\n");
	
	while(i!=-999) {
		printf("%d \n", *pdata++);
		i++;
	}

}