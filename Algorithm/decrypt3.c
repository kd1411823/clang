#include <stdio.h>
main()
{
	char s[21], k[20];
	int  i=0;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s[0]);
	printf("•œ†ƒL[‚ğ“ü—Í>");
	scanf("%s", &k[0]);

	while( s[i] != '\0') {
		s[i] = s[i] - (k[i]-'0');
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
}