	//��5
/*
	����ڷκ��� ��(Second)�� �Է¹޾� ����� �Լ��� ���ڷ� ����
	�Ű������� �ʸ� �Է¹޾�(����) ��/��/���� ���·� ����ϴ� �Լ��� ����
*/

#include <stdio.h>

void hms(int second){
	
	int hour;
	int min;
	int sec;

	hour = second / 3600;
	second %= 3600;
	min = second / 60;
	second %= 60;
	sec = second;

	printf("��� : %d�ð�/%d��/%d��", hour, min, sec);
}

int main(void) {

	int second;

	printf("�� �� : ");
	scanf_s("%d", &second);
	hms(second);

	return 0;
}
