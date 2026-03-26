#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	printf("점수 입력 : ");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("A"); //점수가 90점 이상인 경우
	else if (score >= 80)
		printf("B"); //80점 이상, 90점 미만
	else if (score >= 70)
		printf("C"); //70점 이상, 80점 미만
	else if (score >= 60)
		printf("D"); //60점 이상, 70점 미만
	else
		printf("F"); //60점 미만
}