#include<stdio.h>
main() {
	char s[]="adcde";
	int i = 0;
	while (s[i] != '\0') {
		printf("%c", s[i]);
		i++;
	}
}