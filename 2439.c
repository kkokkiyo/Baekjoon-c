#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if(n >= 1 && n <= 100){
        for(int i = 1; i <= n; i++){
            for(int j = n - i - 1; j >= 0; j--){
                printf(" ");
            }
            for(int k = 1; k <= i; k++){
                printf("*");
            }
            printf("\n");
        }
    }

}