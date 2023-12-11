#include <stdio.h>

int main(void)
{
	printf("점수를 입력하세요: ");

	int nScore = 0;
	scanf_s("%d", &nScore);
	
	char * result = (nScore >= 80) ? "합격" : "불합격";

	printf("결과: %s", result);
	return 0;
}

// printf("%s\n", (nScore >= 80) ? "합격" : "불합격");