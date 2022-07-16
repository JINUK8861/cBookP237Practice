	//문4
/*
	사용자로부터 키를 cm 단위로 입력받아
	m 단위로 환산하여 출력하는 프로그램 작성
	이때, 사용자 정의 함수를 정의하고 입력받은 키를 함수의 인자로 전달받아
	cm를 m 단위로 변환하는 기능을 수행하도록 함
*/

#include <stdio.h>

float mHeight(float cm) {
	float m;

	m = cm / 100;

	return m;
}

int main(void) {

	float cm;

	printf("키를 cm 단위로 입력하세요 : ");
	scanf_s("%f", &cm);
	printf("결과 : %.2fm", mHeight(cm));

	return 0;
}