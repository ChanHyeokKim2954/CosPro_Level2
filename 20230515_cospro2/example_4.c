#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SIZE 3

int func_a(int number)
{
	int answer_a = 0;
	answer_a = number / 100;
	return answer_a;
}

int func_b(int number)
{
	int answer_b = 0;
	answer_b = (number % 100) / 10;
	return answer_b;
}

int func_c(int number)
{
	int answer_c = 0;
	answer_c = number % 10;
	return answer_c;
}

int solution(int number)
{
	int arr[SIZE] = { 0, };
	int num_rev = 0, answer = 0;

	arr[0] = func_a(number);
	arr[1] = func_b(number);
	arr[2] = func_c(number);

	if (arr[0] != 0)
	{
		for (int i = 0; i < SIZE; i++)
		{
			num_rev += arr[i] * pow(10, i);
		}
	}
	else
	{
		for (int i = 1; i < SIZE; i++)
		{
			num_rev += arr[i] * pow(10, i-1);
		}
	}

	answer = number - num_rev;

	return answer;
}

int main()
{
	int number1 = 120;
	int ret1 = solution(number1);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

	return 0;
}