#include <stdio.h>
main()
{
	char s[20];
		int i;
	printf("���������͂��Ă�������>");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("�Í���������́A%s\n", &s[0]);

}