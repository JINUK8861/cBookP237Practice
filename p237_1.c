	//��1
/*
	�� ���� ������ �Ű������� �Է¹޾� �� ������ ����, ����, ����, ������ �����
	��� ����ϴ� �Լ��� �����ϰ�, main �Լ����� �̸� ȣ���ϴ� ���α׷� �ۼ�
*/

#include <stdio.h>

void arithmetic(int a, int b)
{
	printf("���� : %d\n", a + b);
	printf("���� : %d\n", a - b);
	printf("���� : %d\n", a * b);
	printf("������ : %d\n", a / b);
}

int main(void) {
	
	arithmetic(5, 3);

	return 0;
}