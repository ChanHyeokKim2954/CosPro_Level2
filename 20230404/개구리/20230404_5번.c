#include <stdio.h>
#include <stdlib.h>

int solution(int* stones, int stones_num) {
    int cnt = 0;
    int current = 0;
    while (current < stones_num - 1) {
        current += stones[current];
        cnt++;
    }
    return cnt;
}

int main() {
    int size = 0;
    printf("징검다리 돌 개수를 입력하시오. (최소 1개 이상 최대 100개 이하): ");
    scanf_s("%d", &size);

    int* stones = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &stones[i]);
    }

    printf("result : %d\n", solution(stones, size));

    free(stones);
    return 0;
}