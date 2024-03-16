/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
	int year;
	int month;
	scanf_s("%d", &year);
	scanf_s("%d", &month);

	int check = 0;//윤년이면 1로 바꿈

	if (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)))
		check = 1;

	if (month == 2) {
		if (check == 1)
			printf("29");
		else
			printf("28");
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		printf("30");
	else
		printf("31");
    return 0;
}