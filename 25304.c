#include<stdio.h>

int main(void){
    int totalPrice, n, a, b, abPlus = 0;

    scanf("%d\n%d", &totalPrice, &n);
    if(totalPrice >= 1 && totalPrice <= 1000000000 && n >= 1 && n <= 100){
        for(int i = 1; i <= n; i++){
            scanf("%d %d", &a, &b);
            if(a >= 1 && a <= 1000000 && b >= 1 && b <= 10){
                abPlus += (a * b);
            }
        }
        if(totalPrice == abPlus){
            printf("Yes");
        }else{
            printf("No");
        }
    }
}