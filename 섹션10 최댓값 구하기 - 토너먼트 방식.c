#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, max = 0;

	scanf_s("%d%d%d", &a, &b, &c);

	max = (a < b) ? b : a;
	max = (max < c) ? c : max;

	printf("MAX: %d", max);
}