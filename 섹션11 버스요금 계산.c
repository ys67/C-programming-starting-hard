#include <stdio.h>

int main(void)
{
	int nAge = 0;
	int fee = 750;

	scanf_s("%d", &nAge);
	if (nAge < 20)
		printf("나이: %d, 최종요금: %d원", nAge, fee);

	if (nAge >= 20)
	{
		fee = 1000;
		printf("나이: 20, 최종요금: fee원", fee);
	}
	return 0;
}