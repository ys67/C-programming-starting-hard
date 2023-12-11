#include <stdio.h>

int main(void)
{
	int input = 0, max = 0;

	scanf_s("%d", &input);
	max = input; //비교대상이 없으므로

	scanf_s("%d", &input);
	max = (input < max) ? max : input;

	scanf_s("%d", &input);
	max = (input < max) ? max : input;

	printf("MAX: %d", max);
	return 0;
}