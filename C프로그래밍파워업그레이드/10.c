# include <stdio.h>

int main (){
    int a, b, i;
    int sum = 0;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &a, &b);

    int start, end;
    if (a > b){
        start = b;
        end = a;
    }
    else{
        start = a;
        end = b;
    }
    
    for (i = start ;  i < end;  i++){
        if ((i % 3 == 0) || ( i % 5 == 0)){
            printf("%d는 합에서 제외.\n", i);
        }
        else
            sum += i;
        /*
        여기서 else를 사용하지 않는 방법 
        if (!(i % 3) || !(i % 5)){   // 프로그래밍에 익숙해지다보면 보다 간결한 ( = 타이핑 수가 적은) 코드를 선호하게 되는 경향이 강하므로 두 형태의 문장을 모두 익혀두자. 
            printf("%d는 합에서 제외.\n", i);
            continue;
        }
        total += i;
        */

    }
    printf("%d와 %d를 포함하여 그 사이에 있는 정수들의 합 : %d", a, b, sum);
    return 0;
}