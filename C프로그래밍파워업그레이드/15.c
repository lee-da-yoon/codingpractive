# include <stdio.h>
int main(){
    char n;
    int k;
    while (1){
    k = scanf(" %c", &n);
    if (k == EOF){
        printf("프로그램을 종료합니다. \n");
        break;
    }
    else if (('a' <= n) && (n <= 'z'))
        printf("입력하신 문자는 알파벳 소문자입니다.\n");
    else if (('A' <= n) && (n <= 'Z'))
        printf("입력하신 문자는 알파벳 대문자입니다.\n");
    else if (('0' <= n) && (n <= '9'))
        printf("입력하신 문자는 아라비아숫자입니다.\n");
    else 
        printf("특수문자를 입력하셨군요.\n");
    }
    return 0;
}