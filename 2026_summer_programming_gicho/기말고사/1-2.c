// 2023020378 이다윤

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
	char word[20][10]; // 단어 저장할 배열 

	FILE* f;
	f = fopen("f1.txt", "r");
	if (f == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}

	// 단어를 배열에 저장하기 
	int i = 0;
	int n;
	for (i = 0; i < 20; i++) { // 일단 20번까지 돌기는 하는데 
		fscanf(f, "%s", word[i]);  // 배열에 입력 받고 
		if (feof(f))  // 파일에 더 읽을 거 없으면 -- 다음 읽기 시도 시 feof 가 참 -> break
			break;
	}
	n = i;

	//for (int i = 0; i <= n; i++)
	//	printf("%s ", word[i]);

	char find[10];  // 찾을 단어 입력받을 배열 

	while (1) {
		scanf("%s", find);
		getchar();

		if (strcmp(find, "exit") == 0)  // exit 입력시까지무한반복돌기 
			break;
		// 이제 비교 돌아야 함 

		int c = strlen(find);
		int count = 0;

		for (int i = 0; i <= n; i++) {

			for (int j = 0; j < c; j++) {
				if (strcmp(&word[i][j], &find[j]) == 0)
					count++;
				else
					break;
			}

			if (count == c) {
				printf("S\n");
				break;
			}
			else
				count = 0;
		}

		if (count != c)
			printf("F\n");
	}
	fclose(f);
	return 0;
}