# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
    int n, k;
    int count;
    while (1) {
        printf("1 이상의 정수 입력 : ");
        k = scanf("%d", &n);
        if (n < 1)
            printf("1 이상의 정수를 필요로 합니다. 다시 입력하세요. \n\n");

        else if (k == EOF) {
            printf("EOF 입력에 의해 프로그램을 종료합니다.");
            return 1;
        }

        else {
            printf("%d의 약수들\n", n);
            for (int i = 1; i <= n; i++) {
                if ((n % i) == 0)
                    printf("%d ", i);
            }
            printf("\n\n");
        }
    }
    return 0;
}