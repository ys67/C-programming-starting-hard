#include <stdio.h>

int main(void)
{
	int nAge = 0;
	int fee = 750;

	scanf_s("%d", &nAge);
	if (nAge < 20)
		printf("����: %d, �������: %d��", nAge, fee);

	if (nAge >= 20)
	{
		fee = 1000;
		printf("����: 20, �������: fee��", fee);
	}
	return 0;
}