#include<stdio.h>
#include <stdlib.h>

int main(void){
    int a,c,d;
    char b[3];
    scanf("%d", &a);
    scanf("%s", b);

    if(a < 1000 && a > 0){
        c = b[2]-'0'; //
        printf("%d\n", a*c);
        d = a*c;
        
        c = b[1]-48;
        printf("%d\n", a*c);
        d += a*c*10;

        c = b[0]-48;
        printf("%d\n", a*c);
        d += a*c*100;

        printf("%d", d);
    }
    return 0; //꼭 해줘야 됨
    
}
//왜 안될까 일단 나중에 해보자.
//숫자의 아스키 값은 48번부터 0~9를 할당하고 있으므로, char형 '1'은 정수값 49를 가진다. 
//따라서 0의 아스키 값인 48을 char형의 값에서 빼주면 순수한 숫자를 얻어낼 수 있다.
//'0'을 빼줘도 됨