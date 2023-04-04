#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] > ret)
            ret = s[i];
    return ret;
}

int func_b(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        ret += s[i];
    return ret;
}

int func_c(int s[], int arr_size) {
    int ret = 101;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] < ret)
            ret = s[i];
    return ret;
}

int solution(int scores[], size_t scores_m) {
    int sum = func_b(scores, scores_m);
    int max_score = func_a(scores, scores_m);
    int min_score = func_c(scores, scores_m);
    return sum - max_score - min_score;
}

int main()
{
    int size = 0;
    printf("�л��� ���� ������ �Է��Ͻÿ�(�ּ� 3�� �̻� �ִ� 10�� ����): ");
    scanf_s("%d", &size);

    int* scores = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &scores[i]);
    }

    printf("����� : %d \n", solution(scores, size));

    free(scores);

    return 0;
}