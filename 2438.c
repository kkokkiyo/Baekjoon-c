#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    
    if(n >= 1 && n <= 100){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}