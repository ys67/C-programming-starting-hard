#include <stdio.h>

int main(void)
{
	int input = 0;
	scanf_s("%d", &input);

	int count = 0;
	
	while (count < input) //while ������ �����Ǹ� �Ʒ� ����
	{
		printf('* ');
		++count;
	}
	putchar('\n');

	return 0;
}