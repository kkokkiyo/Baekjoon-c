#include<stdio.h>

int main(void){
    int x,y;
    scanf("%d\n %d", &x, &y);

    if(x != 0 && x >= -1000 && x <= 1000 && y != 0 && y >= -1000 && y <= 1000){
        if(x > 0 && y > 0){
            printf("%d", 1);
        }else if(x < 0 && y > 0){
            printf("%d", 2);
        }else if(x < 0 && y < 0){
            printf("%d", 3);
        }else if(x > 0 && y < 0){
            printf("%d", 4);
        }
    }
}