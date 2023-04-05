#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[], int height_len, int k) {
    int answer = 0;
    for (int i = 0; i < height_len; ++i)
        if (height[i] > k)
            answer++;
    return answer;
}

int main()
{
    int size = 0, K_height = 0;
    printf("총 학생 수를 입력하시오.(1명 이상 100명 이하): ");
    scanf_s("%d", &size);

    int* height = malloc(sizeof(int) * size);
    printf("학생들의 키를 입력하시오.(키는 100이상 300이하) \n");
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &height[i]);
    }

    printf("K 학생의 키를 입력하시오.(키는 100이상 300이하):");
    scanf_s("%d", &K_height);

    printf("%d보다 큰사람은 %d명 입니다. \n", K_height, solution(height, size, K_height));

    free(height);

    return 0;
}