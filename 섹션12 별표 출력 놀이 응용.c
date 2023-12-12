#include <stdio.h>

int main(void)
{
	//역방향 12345
	for (int i = 1; i < 6; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
			printf(" ");
		for (int k = 0; k < i; ++k)
			printf("*");
		printf("\n");
	}
	printf("\n");

	// 트리
	for (int i = 1; i < 6; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
			printf(" ");
		for (int k = 0; k < i * 2 - 1; ++k)
			printf("*");
		printf("\n");
	}
	return 0;
}