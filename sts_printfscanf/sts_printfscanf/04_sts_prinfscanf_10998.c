/*
  [백준_문제_단계별로 풀어보기_1단계_입출력과 사칙연산_4단계_10998_A×B_곱셈 문제]

  문제
  두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.

  입력
  첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

  출력
  첫째 줄에 A×B를 출력한다.

  예제 입력 1
  1 2

  예제 출력
  2

  예제 입력 1
  3 4

  예제 출력
  12
*/

#include <stdio.h>

int main_4(void)
{
	int A, B;

	scanf("%d %d", &A, &B);
	printf("%d\n", A * B);

	return 0;
}