#include<stdio.h>

int main(void){
    int a,b,n;
    scanf("%d\n", &n);
    
    for(int i = 1; i <= n; i++){
        scanf("%d %d\n", &a, &b);
        if(a > 0 && b < 10){
            printf("%d\n", a+b);
        }
    }
}