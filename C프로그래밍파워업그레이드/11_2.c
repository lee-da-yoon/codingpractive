# include <stdio.h>
int main(){
    int n, i;
    int sum = 0;
    i =1;

    printf("2 이상 입력 : ");
    scanf("%d", &n);
    
    while ((sum + i) <= n){
        sum += i;
        i++;
    }

    /* 
    다음과 같은 방식으로도 while을 사용 가능 
    i = 1; 
    while (1)
    {
        total +=  i;
        if (num < total)
            break;
        i++;
    }
    */

    printf("%d를 더할 때 처음 %d를 넘기 시작한다\n", i, n);
    printf("%d를 넘기 이전의 합 : %d\n", n, sum);
    printf("%d를 넘은 이후의 합 : %d\n", n, sum + i);
    return 0;
}