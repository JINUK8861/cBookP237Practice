	//��2
/*
	�� ���� ������ �Ű������� �Է¹޾�
	�� ���� ���̿� �ִ� ��� ������ ���� ���Ͽ� ��ȯ�ϴ� �Լ� ����
	main �Լ����� �̸� ȣ���ϴ� ���α׷� �ۼ�
*/

#include <stdio.h>

int betweenSum(int a, int b)
{
	int sum = 0;
	for (int i = a + 1; i < b; i++) {
		sum += i;
	}
	return sum;
}

int main(void) {

	printf("%d", betweenSum(3, 8));

	return 0;
}