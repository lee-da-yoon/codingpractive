# include <stdio.h>

int main(){
    int n, sumodd, sumeven;
    sumodd = 0;
    sumeven = 0;

    printf("자연수 입력 : ");
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++){
        if (i % 2 == 1) // 홀수일 경우 
            sumodd += i;
        else // 짝수일 경우 
            sumeven += i;
    }

    printf("%d 이하 홀수 합 : %d\n", n, sumodd);
    printf("%d 이하 짝수 합 : %d\n", n, sumeven);
    return 0;
}