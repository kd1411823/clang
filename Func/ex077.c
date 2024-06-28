#include<stdio.h>
void kekka(int su1, int su2, int su3, int* z, int* a);

main() {
	int a, b, c, d, e;
	printf("®”‚ğ‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);
	kekka(a, b, c, &d, &e);
	printf("Å‘å’l%d  Å¬’l%d\n", d,e);
}

void kekka(int su1, int su2, int su3, int* z, int* a) {
	*z = (su1 > su2) ? (su1 > su3 ? su1 : su3) : (su2 > su3 ? su2 : su3);
	*a = (su1 < su2) ? (su1 < su3 ? su1 : su3) : (su2 < su3 ? su2 : su3);
	return;
}