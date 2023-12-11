#include <stdio.h>

int main(void)
{
	int input = 0, max = 0;
	scanf_s("%d", &input);
	max = input;

	scanf_s("%d", &input);
	if (input > max)
		max = input;

	scanf_s("%d", &input);
	if (input > max)
		max = input;
	
	printf("MAX: %d", max);
}