#include <stdio.h>
main()
{
	int su1, su2=0, i=0;
	printf("���́H");
	scanf("%d", &su1);

	for (;!= -999;) {
		su2 += su1;
		i++;
		printf("���́H");
		scanf("%d", &su1);
		
	}
	if(i != 0) {
		printf("���v=%d  ����=%.2f", su2,(float) su2 / i);


	}

}