# include <stdio.h>

int main (){
    int n;
    while (1){    
        printf("홀수 단(1), 짝수 단 (2) : ");
        scanf("%d", &n);
        if (! (n==1) && ! (n==2))
            printf("잘못된 입력입니다. 1 또는 2만 입력하세요. \n\n");
        else
            break;
      }
    for (n ; n <= 9; n+=2){
        for (int i = 1; i <= 9; i++ ){
            printf("%d × %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
