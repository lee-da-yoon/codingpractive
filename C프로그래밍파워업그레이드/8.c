# include <stdio.h>

int main(){
    int a, i;
    int binary[30] = {0};
    printf("10진수 정수 입력 : ");
    scanf("%d", &a);
    for (i = 0;;i++){
        if (a <= 0)
            break;
        binary[i] =a % 2;
        a = a/2;
    }

    for (i=i-1; i >= 0 ; i--){
        printf("%d", binary[i]);
    }
   return 0;
}
