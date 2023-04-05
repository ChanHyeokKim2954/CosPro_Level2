#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* name_list[], size_t name_list_m) {
    int answer = 0;
    for (int i = 0; i < name_list_m; ++i)
        for (int j = 0; name_list[i][j] != 0; ++j)
            if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
                answer++;
                break;
            }
    return answer;
}

int main(void)
{
    char* names[4] = {"james","luke","oliver","jack"};

    printf("이름에 j 또는 k가 들어가는 사람은 총 %d명 입니다.\n", solution(names, 4));

    free(names);

    return 0;
}