#include<stdio.h>

int main(void){
    int n, t, i = 0;
    scanf("%d", &n);
    t = n;
    if(n >= 0 && n <100){
        while(1){
            if(n/10 == 0){
                n = n + n*10;
            }
            else{
                n = (n/10 + n%10)%10 + (n % 10)*10;
            }
            i++;
            if(n == t){
                break;
            }
        }
        printf("%d", i);
    }
    
    return 0;
}