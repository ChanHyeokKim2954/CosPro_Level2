#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int stuffs[], int stuffs_len)
{
	int answer = 0;
	int small_counter = 0;
	int general_counter = 0;

	for (int i = 0; i < stuffs_len; i++)
	{
		if (stuffs[i] <= 3)	small_counter += stuffs[i];
		else general_counter += stuffs[i];
	}

	if (small_counter < general_counter)	answer = general_counter;
	else answer = small_counter;

	return answer;
}

int main()
{
	int stuffs[6] = { 5,3,4,2,3,2 };
	int stuffs_len = 6;
	int ret = solution(stuffs, stuffs_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n",ret);
}