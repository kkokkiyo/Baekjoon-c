#include<stdio.h>

int main(void)
{
    double a,b,c;
    scanf("%lf %lf", &a,&b);
    c = a/b;

    if(a>0 && b<10){
        printf("%.9lf", c);
    }
}