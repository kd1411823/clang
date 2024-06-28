#include <stdio.h>
main()
{
	char e;
	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &e);

	if (e >= 'A' && e<='Z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", e + 0x20);
	}
	else {
		if (e >= 'a' && e <= 'z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", e - 0x20);
		}
		else {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", e);
		}
	}
}