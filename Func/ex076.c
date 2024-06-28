#include<stdio.h>
void get_sumsvg(int x, int y, int* sum, float*avg);

main() {
	int a, b, c;
	float d;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);
	get_sumsvg(a, b, &c,&d);
	printf("合計は　%d,平均は　%.2f\n",c,d);

}

void get_sumsvg(int x, int y, int* sum, float*avg) {
	*sum = x + y;
	*avg = (float)*sum / 2;
	return;
}