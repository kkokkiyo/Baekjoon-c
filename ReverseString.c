/*
문자열을 받아서
문자열을 뒤집어 내보내기
예시: I love you --> uoy evol I
*/

#include<stdio.h>
#include <string.h>

int main (void){
    char inputS[100] = "";
    // int discriminator = 1;
    // int temp = 0;
    int len;
    char result[100] = "";
    gets(inputS);
    len = strlen(inputS);

    for(int i = len - 1; i >= 0; i--){
        result[len - i - 1] = inputS[i];
    }
    // while(discriminator){
    //     scanf("%s", &inputS[temp]);
    //     if(inputS[temp] == "\n"){
    //         discriminator = 0;
    //     }
    //     temp++;
    // }

    printf("%s", result);
}
