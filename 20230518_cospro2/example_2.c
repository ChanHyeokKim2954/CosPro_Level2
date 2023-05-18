#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int calorie[], int calorie_len)
{
	int answer = 0, min_calorie = 1000;

	for (int i = 0; i < calorie_len; i++)
	{
		if (min_calorie > calorie[i]) min_calorie = calorie[i];
		answer += calorie[i] - min_calorie;
	}

	return answer;
}

int main()
{
	int calorie[] = { 713,665,873,500,751 };
	int ret = solution(calorie, 5);

	printf("solution 함수의 반환 값은 %d 입니다. \n", ret);

	return 0;
}