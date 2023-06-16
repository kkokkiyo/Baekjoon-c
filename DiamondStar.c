#include<stdio.h>

void diamond(int n){
    if(n%2 != 0){
        int h = n/2 + 1;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < h - 1 - i; j++){
                printf(" ");
            }
            for(int k = 0; k < 1 + 2 * i; k++){
                printf("*");
            }
            printf("\n");
        }
        for(int i = 0; i < h - 1; i++){
            for(int j = 0; j < 1 + i ; j++){
                printf(" ");
            }
            for(int k = 0; k < 2 * (h-1) - 1 - 2 * i; k++){
                printf("*");
            }
            printf("\n");
        }
    }else{
        int h = n/2;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < h - 1 - i; j++){
                printf(" ");
            }
            for(int k = 0; k < 1 + 2 * i; k++){
                printf("*");
            }
            printf("\n");
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < i; j++){
                printf(" ");
            }
            for(int k = 0; k < n - 1 - 2 * i; k++){
                printf("*");
            }
            printf("\n");
        }
    }

}

int main(void){
    int n;
    printf("다이아몬드 줄의 개수 입력: ");
    scanf("%d", &n);
    diamond(n);

}