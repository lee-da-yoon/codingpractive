#include <stdio.h>

int main(){
    int num[5];
    int temp;
    for (int i = 1 ; i <= 5 ; i++){
        printf("숫자 %d 입력 : ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 5 ; j > 0 ; j-- ){
        for (int i = 0 ; i < j ; i++ ){
            if (num[i] > num[i+1]){
                temp = num[i + 1];
                num[i+1] = num[i];
                num[i] = temp; 
            }
        }   
    }
    printf("정렬된 출력 : ");
    for (int i = 0 ; i < 5 ; i++){
        printf("%d ", num[i]);
    }
    return 0;
}