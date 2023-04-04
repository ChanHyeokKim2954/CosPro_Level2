#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; i++)
	{
		sum += i;
	}
	return sum;
}

int solution(int n, int m) {
	int sum_n_1 = func_a(n - 1);
	int sum_m = func_a(m);
	int result = sum_m - sum_n_1;

	return result;
}

int main(void)
{
	int n, m;
	printf("n 부터 m 까지 자연수의 합을 구하시오 \n");
	printf("n : ");
	scanf_s("%d", &n);
	printf("m : ");
	scanf_s("%d", &m);

	printf("%d부터 %d까지 자연수의 합은 %d입니다.\n", n, m, solution(n, m));

	return 0;
}