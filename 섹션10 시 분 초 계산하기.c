#include <stdio.h>

int main(void)
{
	int time = 0;
	scanf_s("%d", &time);

	int hour = 0, min = 0, sec = 0;
	//���� ó���ڵ�

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = time % 60;
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", time, hour, min, sec);
}