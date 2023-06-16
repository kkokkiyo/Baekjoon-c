#include<stdio.h>

int main(void){
    int h, m, t;
    scanf("%d %d\n%d", &h, &m, &t);

    if(h >= 0 && h < 24 && m >= 0 && m < 60 && t >= 0 && t <= 1000){
        if(m + t <60){
            printf("%d %d", h, m+t);
        }else{
            if(h + (m+t)/60 <24){
                printf("%d %d", h + (m+t)/60, (m+t)%60 );
            }else{
                printf("%d %d", (h + (m+t)/60)%24 ,(m+t)%60);
            }
        }

    }
}