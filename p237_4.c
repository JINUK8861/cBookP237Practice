	//��4
/*
	����ڷκ��� Ű�� cm ������ �Է¹޾�
	m ������ ȯ���Ͽ� ����ϴ� ���α׷� �ۼ�
	�̶�, ����� ���� �Լ��� �����ϰ� �Է¹��� Ű�� �Լ��� ���ڷ� ���޹޾�
	cm�� m ������ ��ȯ�ϴ� ����� �����ϵ��� ��
*/

#include <stdio.h>

float mHeight(float cm) {
	float m;

	m = cm / 100;

	return m;
}

int main(void) {

	float cm;

	printf("Ű�� cm ������ �Է��ϼ��� : ");
	scanf_s("%f", &cm);
	printf("��� : %.2fm", mHeight(cm));

	return 0;
}