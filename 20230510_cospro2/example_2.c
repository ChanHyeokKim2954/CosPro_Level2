#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int member_age[], int member_age_len, char* transportation)
{
	int answer = 0;
	int adult = 0, children = 0;
	for (int i = 0; i < member_age_len; i++)
	{
		if (transportation == "Bus")
		{
			(member_age[i] >= 20) ? (adult += 40000) : (children += 15000);
		}
		else if (transportation == "Ship")
		{
			(member_age[i] >= 20) ? (adult += 30000) : (children += 13000);
		}
		else if (transportation == "Airplane")
		{
			(member_age[i] >= 20) ? (adult += 70000) : (children += 45000);
		}
	}

	(member_age_len >= 10) ? (answer = (adult * 0.9) + (children * 0.8)) : ( answer = adult + children);

	return answer;
}


int main()
{
	int member_age1[5] = { 13,33,45,11,20 };
	int member_age1_len = 5;
	char* transportation1 = "Bus";
	int ret1 = solution(member_age1, member_age1_len, transportation1);
	printf("solution 함수의 반환 값은 %d 입니다. \n", ret1);

	int member_age2[10] = { 25,11,27,56,7,19,52,31,77,8 };
	int member_age2_len = 10;
	char* transportation2 = "Ship";
	int ret2 = solution(member_age2, member_age2_len, transportation2);
	printf("solution 함수의 반환 값은 %d 입니다. \n", ret2);

	return 0;
}