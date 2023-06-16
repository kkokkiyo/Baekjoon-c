#include<stdio.h>

int main(void){
    int a;

    scanf("%d", &a);

    if(((a >= 1 && a <= 4000)&&((a%4 == 0 && a%100 != 0) || a%400 == 0))){
        printf("%d", 1);
    }else{
        printf("%d", 0);
    }
}