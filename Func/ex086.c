#include <stdio.h>
main(int argc, char* argv[])
{
	int i;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("argv[&d]=%s\n",i, argv[i]);
	}
	printf("argv[0] = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);
	printf("argv[2] = %s\n", argv[2]);
}