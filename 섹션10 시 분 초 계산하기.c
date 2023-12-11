#include <stdio.h>

int main(void)
{
	int time = 0;
	scanf_s("%d", &time);

	int hour = 0, min = 0, sec = 0;
	//이하 처리코드

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = time % 60;
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", time, hour, min, sec);
}