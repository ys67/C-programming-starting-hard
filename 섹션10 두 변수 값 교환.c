#include <stdio.h>

int main(void)
{
	int nA = 0, nB = 0, tmp = 0;
	scanf_s("%d%d", &nA, &nB);

	tmp = nB;
	nB = nA;
	nA = tmp;

	printf("a: %d, b: %d\n", nA, nB);
}