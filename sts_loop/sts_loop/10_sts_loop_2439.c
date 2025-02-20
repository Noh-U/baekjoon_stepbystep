/*
[백준_문제_단계별로 풀어보기_3단계_반복문_10단계_2439_별 찍기-2_별을 찍는 문제 2]
문제
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

예제 입력 1
5

예제 출력 1
	*
   **
  ***
 ****
*****
*/

#include <stdio.h>

int main_10(void)
{
	int N, i = 1, j;
	scanf("%d", &N);

	while (i <= N)
	{
		j = 1;
		while (j <= N - i)
		{
			printf(" ");
			j++;
		}
		
		j = 1;
		while (j <= i)
		{
			printf("*");
			j++;
		}

		printf("\n");
		i++;
	}
	return 0;
}