	//문5
/*
	사용자로부터 초(Second)를 입력받아 사용자 함수에 인자로 전달
	매개변수로 초를 입력받아(정수) 시/분/초의 형태로 출력하는 함수를 구현
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

	printf("결과 : %d시간/%d분/%d초", hour, min, sec);
}

int main(void) {

	int second;

	printf("몇 초 : ");
	scanf_s("%d", &second);
	hms(second);

	return 0;
}
