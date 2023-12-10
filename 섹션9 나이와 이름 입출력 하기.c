#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	printf("나이를 입력하세요: ");
	scanf_s("%d%*c", &nAge);
	printf("이름을 입력하세요: ");
	gets_s(szName, sizeof(szName));

	printf("%d세 %s\n", nAge, szName);
	return 0;
}