	//��3
/*
	�� ���� ������ �Ű������� �Է�
	�Է¹��� ���� �� ������ 200 �� ū ���� ���̿� 7�� ����� �� ���� �����ϴ��� ���ϰ�
	�� ����� ��ȯ�ϴ� �Լ� ����
*/

#include <stdio.h>

int mul7(int a) {
	int count = 0;

	for (int i = a; i < a + 200; i++) {
		if (i % 7 == 0) {
			printf("%d ", i); // Line 27 �� ��µǱ� ���� ���� ��µȴ�.
			count++;
		}
	}
	return count;
}

int main(void) {
	int num;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("\n%d�� %d ������ 7�� ����� %d���Դϴ�.", num, num+200, mul7(num));
	// Line 27 => Line 14~15�� ��µ� �� ���

	//�߰� : LNK2019 ���� �߻� ��Ȳ
	// 1. �ʿ��� ������� include <~~.h> �̱���
	// 2. ���� ���� ��Ȳ Ȯ��

	return 0;
}