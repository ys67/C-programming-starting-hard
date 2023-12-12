//while¹®
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 0;
	while (i <= 10)
	{
		sum += i;
		++i;
	}
	printf("total: %d", sum);
	return 0;
}

//for¹®
int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 10; ++i)
	{
		sum += i;
	}
	printf("Total: %d", sum);
	return 0;
}