#include <stdio.h>

int main(void)
{
	int nA = 0, nB = 0;
	printf("정수를 입력하세요:");
	scanf_s("%d%d", &nA, &nB);
	
	double avg = 0;
	avg = (nA + nB) / 2.0;
	printf("AVG: %.2f", avg);

	return 0;
}