#include <stdio.h>
void Str_Reverse(char* s1, char* s2); /* �v���g�^�C�v�錾 */
main()
{
	char str1[256], str2[256];
	printf("������?:");
	gets(str1);
	Str_Reverse(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}
// ��������t���ɃR�s�[����
// �߂�l : �Ȃ�
// �� �� : char *s1 �E�R�s�[��
// char *s2 �E�R�s�[��(�t���ɐݒ�)
void Str_Reverse(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}