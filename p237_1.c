	//문1
/*
	두 개의 정수를 매개변수로 입력받아 두 정수의 덧셈, 뺄셈, 곱셈, 나눗셈 결과를
	모두 출력하는 함수를 정의하고, main 함수에서 이를 호출하는 프로그램 작성
*/

#include <stdio.h>

void arithmetic(int a, int b)
{
	printf("덧셈 : %d\n", a + b);
	printf("뺄셈 : %d\n", a - b);
	printf("곱셈 : %d\n", a * b);
	printf("나눗셈 : %d\n", a / b);
}

int main(void) {
	
	arithmetic(5, 3);

	return 0;
}