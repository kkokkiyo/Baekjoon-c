#include<stdio.h>

int main(void){
    int n, v, t = 0;
    scanf("%d", &n);
    int c[n];
    for(int i = 0; i <= n -1; i++){
        scanf("%d", &c[i]);
    }
    scanf("%d", &v);
    for(int i = 0; i <= n -1; i++){
        if(c[i] == v){
            t++;
        }
    }
    printf("%d", t);
    return 0;
}