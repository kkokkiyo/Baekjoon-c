#include<stdio.h>

int main(void){
    int king = 1;
    int queen = 1;
    int rook = 2;
    int bishop = 2;
    int knight = 2;
    int pawn = 8;
    
    int a1, a2, a3, a4, a5,a6;
    scanf("%d %d %d %d %d %d", &a1,&a2,&a3,&a4,&a5,&a6);

    if(a1>= 0 && a1 <= 10){
        printf("%d ", king - a1);
    }
    if(a2>= 0 && a2 <= 10){
        printf("%d ", queen - a2);
    }
    if(a3>= 0 && a3 <= 10){
        printf("%d ", rook - a3);
    }
    if(a4>= 0 && a4 <= 10){
        printf("%d ", bishop - a4);
    }
    if(a5>= 0 && a5 <= 10){
        printf("%d ", knight - a5);
    }
    if(a6>= 0 && a6 <= 10){
        printf("%d ", pawn - a6);
    }
}