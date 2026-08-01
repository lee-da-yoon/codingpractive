# include <stdio.h>

int main(){
    int n;
    printf("정수 입력 : ");
    scanf("%d",&n);

    for (int i = 0 ; i <= 100; i++){
        for (int j = 0 ; j < 100 ; j++){
            for (int m = 0 ; m <= 100; m++){
                if ((i * j - m) == n)
                    printf("(%d) × (%d) - (%d) = (%d)\n", i, j, m, n);
            }
        }
    }
    return 0;
}