#include <stdio.h>
main()
{
	int su1, su2, no, r1;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &no);

	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &su1, &su2);

	if (no == 4) {
		printf("Œ‹‰Ê%d\n", r1 = su1 / su2);
	}
	else{
		if (no == 3) {
			printf("Œ‹‰Ê%d\n", r1 = su1 * su2);
		}
		else {
			if (no == 2) {
				printf("Œ‹‰Ê%d\n", r1 = su1 - su2);
			}
			else{
				if (no == 1) {
					printf("Œ‹‰Ê%d\n", r1= su1 + su2);
				}
			}
			
		}
	}
}