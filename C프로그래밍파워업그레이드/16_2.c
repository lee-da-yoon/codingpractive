# include <stdio.h>

int main(){
    char ch;
    int diff = 'A' - 'a'; // 대문자와 소문자의 차를 계산 

    fputs("문자열 입력 : ", stdout);
    while(1){
        ch =  getchar();

        if (ch == '\n')
            break;
        else if ('a' <= ch && ch <= 'z'){
            putchar(ch + diff);
        }
        else if ('A' <= ch && ch<=  'Z')
            putchar(ch - diff);
        else 
            putchar (ch);
        }
    return 0;
}