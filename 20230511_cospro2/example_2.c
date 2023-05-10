#include <Stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int speed, int cars[], int cars_len)
{
	int answer = 0;

	for (int i = 0; i < cars_len; i++)
	{
		if ((cars[i] >= speed + (speed * 0.1)) && (cars[i] < speed + (speed * 0.2)))
		{
			answer += 3;
		}
		else if ((cars[i] >= speed + (speed * 0.2)) && (cars[i] < speed + (speed * 0.3)))
		{
			answer += 5;
		}
		else if ((cars[i] >= speed + (speed * 0.3)))
		{
			answer += 7;
		}
	}

	return answer;
}

int main()
{
	int speed = 100;
	int cars[] = { 110,98,125,148,120,112,89 };
	int cars_len = 7;
	int ret = solution(speed, cars, cars_len);

	printf(" solution 한수의 반환 값은 %d 입니다. \n", ret);

	return 0;
}