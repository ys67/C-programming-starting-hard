#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = i; j < 5; ++j)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}
	
	for (int i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	return 0;
}