#include<stdio.h>
main() {
	int i;
	char moji;
	moji = 'A';

	for (i = 0; i < 26; i++) {
		printf("%c ",moji);
        moji++;
	}
}