#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int korea, int english)
{
	int answer = 0;

	answer = (3 * 70) - (korea + english);

	return answer;
}

int main()
{
	int korea = 70;
	int english = 60;
	int ret = solution(korea, english);
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�. \n", ret);

	return 0;
}