#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//price_m�� �迭 price�� �����Դϴ�.
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
    printf("������ ���� ������ �Է��Ͻÿ�. (�ּ� 1�� �̻� �ִ� 50 ����): ");
    scanf_s("%d", &size);

    int* price = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &price[i]);
    }

    printf("������ �ݾ��� �Է��Ͻÿ� : ");
    scanf_s("%d", &money);

    printf("�Ž��� ���� %d �Դϴ�. \n", solution(price, size, money));
    return 0;
}