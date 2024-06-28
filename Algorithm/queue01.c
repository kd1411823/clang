#include <stdio.h>
#include <conio.h>
#define QUEUESIZE 8 //�L���[�T�C�Y �����ȏ�����ύX
int queue[QUEUESIZE]; //�L���[�̈�p�z��
int head = 0; //�L���[�擪�f�[�^�̃|�C���^(�z��̓Y����)
int tail = 0; //�L���[�I�[�f�[�^�̃|�C���^(�z��̓Y����)
/* �֐��v���g�^�C�v */
void display(void);
int enqueue(int d);
int dequeue(int* pd);
/* ���C���֐� */
main()
{
	int key, data, result;
	do {
		printf("\n\n���G���L���[��i�A�f�L���[��o����͂���>");
		key = getche();
		printf("\n");
		//�G���L���[����
		if (key == 'i') {
			printf("�f�[�^����>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n�������L���[����t�ł�������\n");
			}
			else {
				display();
			}
		}
		//�f�L���[����
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�������L���[����ł�������\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}
/* �L���[�\���֐� */
void display(void)
{
	int i;
	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf(" ��head�������Ă��鏊(����head��%d)", head); //�m�F�p
		}
		if (i == tail) {
			printf(" ��tail�������Ă��鏊(����tail��%d)", tail); //�m�F�p
		}
		printf("\n");
	}
	return;

}
/* �L���[�Ƀf�[�^������(�G���L���[����)�֐� */
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; } //�L���[����t�̂Ƃ�
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}
/* �L���[����f�[�^�����o��(�f�L���[����)�֐� */
int dequeue(int* pd)
{
	if (head == tail) { return -1; } //�L���[����̂Ƃ�
	*pd = queue[head];
	queue[head] = 0; //�m�F���₷�����邽��
	head++;
	head = head % QUEUESIZE;
	return 0;
}