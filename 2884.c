#include<stdio.h>

int main(void){
    int h,m;
    scanf("%d %d", &h, &m);

    if(h >= 0 && h < 24 && m >= 0 && m < 60){
        if(m - 45 < 0){
            if(h-1 >= 0){
                printf("%d %d", h-1, m + 15);
            }else{
                printf("%d %d", h + 23, m + 15);
            }
        }else{
            printf("%d %d", h, m - 45);
        }
    }
}