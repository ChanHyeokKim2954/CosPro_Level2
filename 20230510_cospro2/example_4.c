#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(char* words[], int words_len, char* word)
{
	int count = 0;

	int word_len = strlen(word);

	for (int i = 0; i < words_len; i++)
	{
		for (int j = 0; j < word_len; j++)
		{
			if (word[j] != words[i][j])	count++;
		}
	}

	return count;
}

int main()
{
	char* words[3] = { "CODE", "COED" ,"CDEO" };
	int words_len = 3;
	char* word = "CODE";
	int ret = solution(words, words_len, word);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ� \n", ret);

	return 0;
}