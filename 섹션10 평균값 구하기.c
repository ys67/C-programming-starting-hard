#include <stdio.h>

int main(void)
{
	int nA = 0, nB = 0;
	printf("������ �Է��ϼ���:");
	scanf_s("%d%d", &nA, &nB);
	
	double avg = 0;
	avg = (nA + nB) / 2.0;
	printf("AVG: %.2f", avg);

	return 0;
}