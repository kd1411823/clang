#include<stdio.h>
void get_sumsvg(int x, int y, int* sum, float*avg);

main() {
	int a, b, c;
	float d;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);
	get_sumsvg(a, b, &c,&d);
	printf("���v�́@%d,���ς́@%.2f\n",c,d);

}

void get_sumsvg(int x, int y, int* sum, float*avg) {
	*sum = x + y;
	*avg = (float)*sum / 2;
	return;
}