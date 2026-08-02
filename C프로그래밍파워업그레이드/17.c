# include <stdio.h>

int main(){
    char word[5][20];
    char temp [20];
    
    for (int i = 0 ; i < 5 ; i++){
        printf("문자열 입력 %d", i);
        scanf("%s", word[i]);
    }

    for (int j = 5 ; j > 0 ; j-- ){
        for (int i = 0 ; i < j ; i++){
            if (strlen(word[i]) > strlen(word[i + 1])){
                temp = word[i];
                word[i] = word[i +1];
                word[i + 1] = temp;
            }
        }
    }

    for (int i = 0 ; i < 5 ; i++){
        printf("%s\n", word[i]);
    }
    
    return 0;
}