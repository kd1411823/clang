#include<stdio.h>
main() {
	char data1[] = "abcde";
	char data2[20];
	int i = 0;
	printf("（コピー元）配列data1[]=");
	printf("%s\n", &data1[0]);
	while (data1[i] != '\0') {
		data2[i] = data1[i];
		i++;
	}
	data2[i] = '\0';
	printf("（コピー元）配列data2[]=");
	printf("%s\n", &data2[0]);
}