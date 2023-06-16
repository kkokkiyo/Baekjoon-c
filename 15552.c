#include<stdio.h>

int main(void){
    int t, a, b;
    scanf("%d\n", &t);
    if(t <= 1000000){
        for(int i = 1; i <= t; i++){
            scanf("%d %d", &a, &b);
            if(a >= 1 && b >= 1 && a <= 1000 && b <= 1000){
                printf("%d\n", a+b);
            }
        }
    }
}