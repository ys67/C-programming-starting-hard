#include <stdio.h>

int main(void)
{
	int nA = 0, nB = 0;
	scanf_s("%d%d", &nA, &nB);
	int result = ~nB + 1; //~nB�� 1�� ���� +1�ϸ� 2�� ����
	printf("���: %d", nA + result);
	return 0;
}