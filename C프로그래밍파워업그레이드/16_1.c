# include <stdio.h>
# include <string.h>

int main(){
    char line[256];

    printf("문자열 입력 : ");
    fgets(line, sizeof(line), stdin);
    int n = strlen(line);
    int diff = 'A' - 'a';

    for (int i = 0 ; i < n; i++){
        if ((line[i] >= 'a') && (line[i] <= 'z'))
            printf("%c", line[i] + diff);
        else if ((line[i] >= 'A') && (line[i] <= 'Z')){
            printf("%c", line[i] - diff);
        }
        else
            printf("%c", line[i]);
    }
    return 0;
}

# include <stdio.h>
# include <string.h>
# define STR_LEN 256

int main(){
    char str[STR_LEN];
    int strLen=0;
    int i;

    int diff = 'A' - 'a'; // 대문자와 소문자의 차를 계산 

    fputs("문자열 입력 : ", stdout);
    gets(str);
    strLen = strlen(str); // 입력한 문자열의 길이 계산 

    for (i = 0 ; i < strLen ; i++){
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] += diff;
        else if ('A' <= str[i] && str[i] <= 'Z')
            str[i] -= diff;
        else
            ; // 이외의 경우에는 별로 할 일이 없어 비워 둠
    }

    puts(str);
    return 0;
}