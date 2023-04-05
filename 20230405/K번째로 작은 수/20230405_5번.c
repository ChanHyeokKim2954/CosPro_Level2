#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ROW 4
#define COL 4

int solution(int(*arr)[4], size_t arr_row_len, size_t arr_col_len, int k) {
    int answer = 0, count = 0;
    int size = arr_row_len * arr_col_len;
    int* arr2 = (int*)malloc(sizeof(int) * size);

    for (int i = 0; i < arr_row_len; i++)
    {
        for (int j = 0; j < arr_col_len; j++)
        {
            arr2[count++] = arr[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            int temp = 0;
            if (arr2[j] < arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    answer = arr2[size - k - 1];

    return answer;
}

int main(void)
{
    int arr[][4] = { {0,}, };
    int k = 0;
    printf("2�� �迭�� ���� �Է��Ͻÿ�.\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf_s("%d", &arr[i][j]);
        }
    }
    printf("���°�� ���� ���� ã���� �Է��Ͻÿ�.: ");
    scanf_s("%d", &k);

    printf("%d��° �������� %d �Դϴ�.\n", k, solution(arr, ROW, COL, k));

    return 0;
}