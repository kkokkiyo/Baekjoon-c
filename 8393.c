#include<stdio.h>

int main(void){
    int n, p = 0;
    scanf("%d", &n);

    if(n >= 1 && n <= 10000){
        for(int i = 1; i <= n; i++){
            p += i;
        }
        printf("%d", p);
    }
}