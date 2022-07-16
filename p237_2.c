	//문2
/*
	두 개의 정수를 매개변수로 입력받아
	두 정수 사이에 있는 모든 정수의 합을 구하여 반환하는 함수 정의
	main 함수에서 이를 호출하는 프로그램 작성
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