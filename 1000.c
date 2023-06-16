#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    c = a+b;

    if(a>0 && b<10){
        printf("%d", c);
    }
}