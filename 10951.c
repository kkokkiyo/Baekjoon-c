#include<stdio.h>

int main(void){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a > 0 && b < 10){
            printf("%d\n", a+b);
        }
    }
}

//입력개수가 정해져 있지않으니 파일의 끝을 알려주는 EOF 를 이용하여 풀기