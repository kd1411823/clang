#include <stdio.h>
main()
{
	int su1, su2, no, r1;
	printf("���Z�q�����:");
	scanf("%d", &no);

	printf("�Q�̐��������:");
	scanf("%d%d", &su1, &su2);

	if (no == 4) {
		printf("����%d\n", r1 = su1 / su2);
	}
	else{
		if (no == 3) {
			printf("����%d\n", r1 = su1 * su2);
		}
		else {
			if (no == 2) {
				printf("����%d\n", r1 = su1 - su2);
			}
			else{
				if (no == 1) {
					printf("����%d\n", r1= su1 + su2);
				}
			}
			
		}
	}
}