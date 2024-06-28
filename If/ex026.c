#include <stdio.h>
main()
{
	char tuki;
	printf("Œ‚ğ“ü—Í:");
	scanf("%c", &tuki);

	if (tuki == '2') {
		printf("ÅI“ú‚Í29“ú‚Å‚·\n");
	}
	else {
		if (tuki == '4' || tuki == '6' || tuki == '9' || tuki == '11') {
			printf("ÅI“ú‚Í30“ú‚Å‚·\n");
		}
		else {
			printf("ÅI“ú‚Í‚R‚P“ú‚Å‚·\n");
		}
	}
}