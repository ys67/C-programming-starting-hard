#include <stdio.h>

int GetMax(int a, int b, int c) // ±â´É
{
	int nMax = a;
	if (b > nMax)
		nMax = b;
	if (c > nMax)
		nMax = c;

	return nMax;
}

int main(void) // UI
{
	int a = 0, b = 0, c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("MAX: %d\n", GetMax(a, b, c));
	return 0;
}