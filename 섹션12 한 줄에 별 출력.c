#include <stdio.h>

int main(void)
{
	int input = 0;
	scanf_s("%d", &input);

	int count = 0;
	
	while (count < input) //while 조건이 충족되면 아래 진행
	{
		printf('* ');
		++count;
	}
	putchar('\n');

	return 0;
}