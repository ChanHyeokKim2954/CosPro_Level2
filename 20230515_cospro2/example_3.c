#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len)
{
	int answer = 0;

	for (int i = 0; i < arr_len; i++)
	{
		int count = 0;
		for (int j = 0; j < arr_len; j++)
		{
			if (arr[i] / 2 == arr[j]) {
				count++;
				if (count == 1) answer++;
			}
		}
	}

	return answer;
}

int main()
{
	int arr[] = { 4,8,3,6,3 };
	int arr_len = 5;
	int ret = solution(arr, arr_len);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

	return 0;
}