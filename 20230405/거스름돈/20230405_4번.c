#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//price_m은 배열 price의 길이입니다.
int solution(int price[], size_t price_m, int money) {
    int answer = 0;
    int sum = 0;
    for (int i = 0; i < price_m; i++)
    {
        sum += price[i];
    }
    answer = money - sum;

    if (answer < 0)  answer = -1;

    return answer;
}

int main(void)
{
    int size = 0, money = 0;
    printf("구입한 물건 개수를 입력하시오. (최소 1개 이상 최대 50 이하): ");
    scanf_s("%d", &size);

    int* price = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &price[i]);
    }

    printf("지불할 금액을 입력하시오 : ");
    scanf_s("%d", &money);

    printf("거스름 돈은 %d 입니다. \n", solution(price, size, money));
    return 0;
}