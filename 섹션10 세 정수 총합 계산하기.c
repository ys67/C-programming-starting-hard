#include <stdio.h>

int main(void)
{
	int input = 0;
	scanf_s("%d", &input);
	input += input;

	scanf_s("%d", &input);
	input += input;

	scanf_s("%d", &input);
	input += input;
	
	printf("Total %d", input);
	return 0;
}