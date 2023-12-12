#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			printf("* ");
		printf("\n");
	}
	printf("\n");

	for (int a = 1; a < 6; ++a)
	{	
		for (int i = 0; i < a; ++i)
			printf("* ");
		printf("\n");
	}
		
	return 0;
}