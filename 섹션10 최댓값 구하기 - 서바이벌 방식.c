#include <stdio.h>

int main(void)
{
	int input = 0, max = 0;

	scanf_s("%d", &input);
	max = input; //�񱳴���� �����Ƿ�

	scanf_s("%d", &input);
	max = (input < max) ? max : input;

	scanf_s("%d", &input);
	max = (input < max) ? max : input;

	printf("MAX: %d", max);
	return 0;
}