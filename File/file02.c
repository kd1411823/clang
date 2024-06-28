#include<stdio.h>
main() {
	FILE* fp;
	char str[256];
	int lv, hp;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("装備：%s\n", str);
	fscanf(fp, "%s", str);
	printf("装備：%s\n", str);
	fscanf(fp, "%s", str);
	printf("装備：%s\n", str);
	fscanf(fp, "%d%d%s", &lv, &hp, str);
	printf("Lv:%d hp:%d 装備：%s\n", lv, hp, str);
	fclose(fp);
}