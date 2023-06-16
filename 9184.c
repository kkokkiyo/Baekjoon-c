//나중에 다시 온다 기다려라


#include<stdio.h>

int w(int a, int b, int c){

    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }else if(a > 20 || b > 20 || c > 20){
        return w(20, 20, 20);
    }else if(a < b && b < c){
        return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    }else{
        return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }
}

int wd(int a, int b, int c){

    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }else if(a > 20 || b > 20 || c > 20){
        a = 20;
        b = 20;
        c = 20;

    }else if(a < b && b < c){
        return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    }else{
        return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }
}

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("w(%d %d %d) = %d", a, b,c , w(a, b, c));

}