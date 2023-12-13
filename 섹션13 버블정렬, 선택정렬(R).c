// 1번문제 2, 20
#include <stdio.h>

int main(void)
{
	int aList[5] = { 5, 4, 3, 2, 1 };
	int nMax = aList[0];
	for (int i = 0; i < 5; ++i)
		if (nMax < aList[i])
		{
			nMax = aList[i];
		}

	printf("%d", nMax);
	return 0;
}

// 2번문제 3, 20
#include <stdio.h>

int main(void)
{
	int aList[5] = { 5, 4, 3, 2, 1 };
	int nMin = 0, tmp = 0;
	for (int i = 0; i < 5; ++i)
		if (aList[nMin] > aList[i])
		{
			nMin = i;
		}
	
	tmp = aList[nMin];
	aList[nMin] = aList[0];
	aList[0] = tmp;
	
	for (int i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);

	putchar('\n');

	printf("%d", aList[0]);
	return 0;
}

//3번문제 3.5, 30
#include <stdio.h>

int main(void)
{
int aList[5] = { 30, 40, 10, 50, 20 };
	int tmp = 0;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (aList[j] > aList[j + 1])
			{
				tmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);

	return 0;
}

//4번문제 4, 30
#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

	for (i = 0; i < 5; ++i)
	{
		nMinIndex = i;
		for (j = i; j < 5; ++j)
		{
			if (aList[nMinIndex] > aList[j])
				nMinIndex = j;
		}
		
		if (nMinIndex != i)
		{
			nTmp = aList[i];
			aList[i] = aList[nMinIndex];
			aList[nMinIndex] = nTmp;
		}
	}

	for (int i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	return 0;
}