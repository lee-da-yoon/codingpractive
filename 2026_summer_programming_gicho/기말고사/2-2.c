// 2023020378 이다윤

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

void transposeMatrix(int** A, int** B, int r, int c);
void printMatrix(int** M, int r, int c);

int main() {
	int r, c;
	FILE* f;
	f = fopen("f2.txt", "r");
	if (f == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}

	fscanf(f,"%d %d", &r, &c);

	int** arr;   //원본 배열 arr의 동적 할당 
	arr = (int**)malloc(sizeof(int*) * r);
	if (arr == NULL) {
		printf("동적 할당 실패\n");
		return 1;
	}


	for (int i = 0; i < r; i++) {
		if ((arr[i] = (int*)malloc(sizeof(int) * c)) == NULL) {
			printf("동적 할당 실패\n");
			free(arr);
			return 1;
		}
	}


	for (int i = 0; i < r; i++) {  // arr에 내용 입력하기 
		for (int j = 0; j < c; j++) {
			fscanf(f, "%d", &arr[i][j]);
		}
	}


	int** arrt;  // transpose의 결과를 받을 배열 
	if ((arrt = (int**)malloc(sizeof(int*) * c)) == NULL) {
		printf("동적 할당 실패\n");
		exit(1);
	}
	for (int i = 0; i < c; i++) {
		if ((arrt[i] = (int*)malloc(sizeof(int) * r)) == NULL) {
			printf("동적 할당 실패\n");
			free(arrt);
			exit(1);
		}
	}


	transposeMatrix(arr, arrt, r, c); // 전치행렬 생성
	printf("원본행렬 A\n");
	printMatrix(arr, r, c);  // 원본행렬 A 출력 
	printf("\n전치행렬 B\n");
	printMatrix(arrt, c, r);


	// free 하기 배열 2개 다 돌면서 
	for (int i = 0; i < r; i++) {
		free(arr[i]);
	}
	free(arr);

	for (int i = 0; i < c; i++)
	{
		free(arrt[i]);
	}
	free(arrt);

	fclose(f);
	return 0;
}

void transposeMatrix (int** A, int** B, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			B[j][i] = A[i][j];
		}
	}
}


void printMatrix(int** M, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%4d", M[i][j]);
		}
		printf("\n");
	}
}