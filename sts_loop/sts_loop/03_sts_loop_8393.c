/*
[백준_문제_단계별로 풀어보기_3단계_반복문_3단계_8393_합_1부터 N까지의 합을 구하는 문제. 물론 반복문 없이 풀 수도 있습니다.]
문제
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

출력
1부터 n까지 합을 출력한다.

예제 입력 1
3

예제 출력 1
6
*/

#include <stdio.h>

int main_3(void)
{
	int i = 1, n, sum = 0;

	scanf("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("%d", sum);
}