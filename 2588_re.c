#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d\n %d", &a,&b);

    if(a>0 && a<1000 && b>0 && b<1000){
        printf("%d\n", a*(b%10));
        printf("%d\n", a*((b%100)/10));
        printf("%d\n", a*(b/100));
        printf("%d\n", a*b);
    }
}