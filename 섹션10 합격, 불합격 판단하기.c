#include <stdio.h>

int main(void)
{
	printf("������ �Է��ϼ���: ");

	int nScore = 0;
	scanf_s("%d", &nScore);
	
	char * result = (nScore >= 80) ? "�հ�" : "���հ�";

	printf("���: %s", result);
	return 0;
}

// printf("%s\n", (nScore >= 80) ? "�հ�" : "���հ�");