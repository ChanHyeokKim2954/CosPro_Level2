#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* func_a(int arr[], int arr_size, int n) {
    int* ret = (int*)malloc(sizeof(int) * (arr_size - 1));
    int idx = 0;
    for (int i = 0; i < arr_size; ++i)
        if (arr[i] != n)
            ret[idx++] = arr[i];
    return ret;
}

int func_b(int a, int b) {
    if (a >= b)
        return a - b;
    else
        return b - a;
}

int func_c(int arr[], int arr_size) {
    int ret = -1;
    for (int i = 0; i < arr_size; ++i)
        if (ret < arr[i])  ret = arr[i];
    return ret;
}

int solution(int visitor[], size_t visitor_m) {
    int max_first = func_c(visitor, visitor_m);
    int* visitor_removed = func_a(visitor, visitor_m, max_first);
    int max_second = func_c(visitor_removed, visitor_m - 1);
    int answer = func_b(max_first, max_second);

    free(visitor_removed);
    return answer;
}

int main()
{

    int size = 0;
    printf("몇일 동안 공항의 방문객 수를 측정할 것인지 입력하시오.(최소 1이상 최대 100이하): ");
    scanf_s("%d", &size);

    int* visitor = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &visitor[i]);
    }

    printf("result : %d \n", solution(visitor, size));

    free(visitor);

    return 0;
}