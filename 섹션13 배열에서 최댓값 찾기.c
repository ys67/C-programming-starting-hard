#include <stdio.h>

int main(void)
{
	// 첫 번째 문제
	int aList[5] = { 50, 40, 10, 50, 20 };
	int nMax = 0;

	nMax = aList[0];
	for (int i = 1; i < 5; ++i)
	{
		if (aList[i] > nMax)
			nMax = aList[i];
	}

	printf("Max: %d", nMax);

	printf("\n");

	// 두 번째 문제
	int bList[5] = { 30, 40, 10, 50, 20 };

	for (int i = 1; i < 5; ++i)
	{
		if (bList[i] < bList[0])
		{
			int tmp = bList[0];
			bList[0] = bList[i];
			bList[i] = tmp;
		}
	}

	for (int i = 0; i < 5; ++i)
		printf("%d ", bList[i]);

	return 0;
}

