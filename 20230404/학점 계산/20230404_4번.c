#include <stdio.h>
#include <stdlib.h>
#define GRADESIZE 5

int* solution(int* scores, int scoresSize) {
    int* grade_counter = (int*)malloc(sizeof(int) * GRADESIZE);
    for (int i = 0; i < GRADESIZE; ++i)
    {
        grade_counter[i] = 0; 
    }
    for (int i = 0; i < scoresSize; ++i)
    {
        if (scores[i] >= 85)
            grade_counter[0] += 1;
        else if (scores[i] >= 70)
            grade_counter[1] += 1;
        else if (scores[i] >= 55)
            grade_counter[2] += 1;
        else if (scores[i] >= 40)
            grade_counter[3] += 1;
        else
            grade_counter[4] += 1;
    }
    return grade_counter;
}

int main()
{
    int size = 0;
    printf("총 학생 수를 입력하시오. (최소 1명 이상 최대 200명 이하): ");
    scanf_s("%d", &size);

    int* scores = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &scores[i]);
    }
    int* counter = solution(scores, size);
    for (int i = 0; i < GRADESIZE; ++i)
    {
        printf("%d ", counter[i]);
    }
    free(counter);
    free(scores);
    return 0;
}
