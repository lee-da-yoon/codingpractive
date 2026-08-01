# include <stdio.h>

int main(){
    int n1, n2, sum;
    sum = 0;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n1, &n2);

    printf("%d와 %d를 포함하여 그 사이에 있는 정수들의 합 : ", n1, n2);
    if (n1 <  n2){
        for (n1 ; n1 <= n2 ; n1++){
            sum += n1;
        }

    }
     else if (n1 > n2) {
        for (n2 ; n2 <= n1 ; n2++ ){
            sum += n2;
        }
    }

    printf("%d", sum);
    return 0;
}


// 1번 예제코드 
// num1 > num2인 경우와 그렇지 않은 경우의 for문을 if~else문을 통해 분리하고 있다. 크게 문제되지 않으나 이러한 코드는 확장에 불편함을 가져다 준다. 가급적이면 
// 하나의 for 문 안에서 모든 상황이 처리될 수 있도록 구현하는 코드가 더 좋은 코드라고 이야기할 수 있따. 
# include <stdio.h>

int main(void){
    int num1, num2, i;
    int total = 0;

    fputs("두 개의 정수 입력 : ", stdout);
    scanf("%d %d", & num1, & num2);

    if (num1 < num2)
    {
        for (i = num2 ; i < num1 ; i++)
            total += i;    
    }
    else
    {
        for (i = num1 ; i < num2 ; i++)
            total += i;
    }

    printf("%d과 %d를 포함하여 그 사이에 있는 정수들의 합 : %d\n", num1, num2, total);

    return 0;
}

// 2번 예제코드 
//이전 예제에서는 두 번 등장했던 for 문이 한 번만 등장하였다. 확장성 관점에서 보면 이것이 더 좋은 모델이다. 
# include <stdio.h>

int main(void)
{
    int num1, num2, i;
    int total = 0;

    int start, end;

    fputs("두 개의 정수 입력 : ", stdout);
    scanf("%d %d", &num1, &num2);

    if (num1> num2)
    {
        start = num2;
        end = num1;
    }
    
    else
    {
        start = num1; 
        end = num2;
    }

    for (i = start ; i <= end ; i++)
        total += i;

    printf("%d과 %d를 포함하여 그 사이에 있는 정수들의 합 : %d\n", num1, num2, total);
    return 0;
}