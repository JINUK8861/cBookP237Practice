	//문3
/*
	한 개의 정수를 매개변수로 입력
	입력받은 수와 그 수보다 200 더 큰 정수 사이에 7의 배수가 몇 개나 존재하는지 구하고
	그 결과를 반환하는 함수 구현
*/

#include <stdio.h>

int mul7(int a) {
	int count = 0;

	for (int i = a; i < a + 200; i++) {
		if (i % 7 == 0) {
			printf("%d ", i); // Line 27 이 출력되기 전에 전부 출력된다.
			count++;
		}
	}
	return count;
}

int main(void) {
	int num;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("\n%d과 %d 사이의 7의 배수는 %d개입니다.", num, num+200, mul7(num));
	// Line 27 => Line 14~15가 출력된 후 출력

	//추가 : LNK2019 에러 발생 상황
	// 1. 필요한 헤더파일 include <~~.h> 미구현
	// 2. 빌드 제외 현황 확인

	return 0;
}