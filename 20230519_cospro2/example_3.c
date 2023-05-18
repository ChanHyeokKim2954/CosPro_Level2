#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int papers[], int paper_lens, int K)
{
	int length = paper_lens;

	for (int i = 0; i < paper_lens; i++)
	{
		if (K > 0)	K -= papers[i];
		else return i;
	}

	return length;
}

int main()
{
	int papers1[] = { 2,4,3,2,1 };
	int papers_len1 = 5;
	int K1 = 10;
	int ret1 = solution(papers1, papers_len1, K1);

	printf("solution 함수의 반환 값은 %d 입니다. \n", ret1);

	int papers2[] = { 2,4,3,2,1 };
	int papers_len2 = 5;
	int K2 = 14;
	int ret2 = solution(papers2, papers_len2, K2);

	printf("solution 함수의 반환 값은 %d 입니다. \n", ret2);

	return 0;
}