#include<stdio.h>
int hikaku(int d1,int d2);
main() {
	int d1, d2;
	printf("2‚Â®”H");
	scanf("%d %d", &d1, &d2);
	printf("max=%d\n", hikaku(d1, d2));
}
int hikaku(int d1,int d2) {
	if (d1 > d2) {
		return(d1);
	}
	else {
		if (d1 < d2) {
			return(d2);
		}
			
	}
}