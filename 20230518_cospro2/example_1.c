#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int n, int vote[], int vote_len)
{
	int answer = 0;
	int count[3] = { 0, };
	for (int i = 0; i < vote_len; i++)
	{
		count[vote[i] - 1]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (count[answer] < count[i])
			answer = i;
	}
	return answer + 1;

}

int main()
{
	int n1 = 3;
	int votes1[7] = { 1,2,1,3,1,2,1 };
	int votes_len1 = 7;
	int ret1 = solution(n1, votes1, votes_len1);

	printf("solution 함수의 반환 값은 %d 입니다 \n", ret1);

	int n2 = 3;
	int votes2[7] = { 2,1,2,1,2,2,1 };
	int votes_len2 = 7;
	int ret2 = solution(n2, votes2, votes_len2);

	printf("solution 함수의 반환 값은 %d 입니다 \n", ret2);

	return 0;
}