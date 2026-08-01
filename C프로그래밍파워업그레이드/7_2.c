# include <stdio.h>
int main (){
    int a, b, c;
    printf("세 개의 숫자를 입력하세요 : ");
    scanf("%d %d %d", &a, &b, &c);
    int max;
    max = (a > b)? a : b;
    max = (max > c)? max : c;

    printf("큰 수는 %d", max);
    return 0;
}