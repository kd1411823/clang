#include <stdio.h>
main()
{
	int c,g=0,i=0;
	char dumy[256];
	printf("\n����^z�ŏI��");
	scanf("%d", &c);
	while (c != EOF) {
		g += c;
		i++;
		gets(dumy);



		printf("\n����^z�ŏI��");
		scanf("%d", &c);

	}
	printf("���v��%d", g);
	printf("���ρ�%d", g / i);
}