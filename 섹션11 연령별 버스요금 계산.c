#include <stdio.h>

int main(void)
{
	int nAge = 0;
	double fee = 1000;

	scanf_s("%d", &nAge);
	
	if (nAge >= 14)
	{
		if (nAge >= 20)
			fee = fee * 1;
		else
			fee = fee * 0.75;
	}
	else
		if (nAge >= 4)
			fee = fee * 0.5;
		else
			fee = fee * 0;
	printf("¿ä±Ý: %0.f", fee);
	return 0;
}