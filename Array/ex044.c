#include <stdio.h>
main()
{
	char moji1[40], moji2[40], w[40];
		int i;
	printf("������P�����:");
	scanf("%s", &moji1[0]);

	printf("������Q�����:");
	scanf("%s", &moji2[0]);

	printf("moji1=%s moji2=%s\n", moji1, moji2);
	i = 0;
	while (moji1[i] != '\0') {
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	i = 0;
	while (moji2[i] != '\0') {
		moji1[i] = moji2[i];
		i++;
	}
	moji1[i] = '\0';
	i = 0;
	while (w[i] != '\0') {
		moji2[i] = w[i];
		i++;
	}
	moji2[i] = '\0';
	printf("����ւ����\n");
	printf("moji1=%s moji2=%s\n", moji1, moji2);
	

}