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
    printf("�� �л� ���� �Է��Ͻÿ�.(1�� �̻� 100�� ����): ");
    scanf_s("%d", &size);

    int* height = malloc(sizeof(int) * size);
    printf("�л����� Ű�� �Է��Ͻÿ�.(Ű�� 100�̻� 300����) \n");
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &height[i]);
    }

    printf("K �л��� Ű�� �Է��Ͻÿ�.(Ű�� 100�̻� 300����):");
    scanf_s("%d", &K_height);

    printf("%d���� ū����� %d�� �Դϴ�. \n", K_height, solution(height, size, K_height));

    free(height);

    return 0;
}