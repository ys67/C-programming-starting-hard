#include <stdio.h>

int main(void)
{
	int nA = 0, nB = 0;
	scanf_s("%d%d", &nA, &nB);
	int result = ~nB + 1; //~nB는 1의 보수 +1하면 2의 보수
	printf("결과: %d", nA + result);
	return 0;
}