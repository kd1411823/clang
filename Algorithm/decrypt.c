#include <stdio.h>
main()
{
	char s[20];
	int i;

	printf("�Í�������������>");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i] -= 1;
		i++;
	}
	printf("�������������%s\n", s);
	
}