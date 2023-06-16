#include<stdio.h>

int main(void){
    int checker[30] = {0};
    int n = 0;
    for(int i = 0; i <= 27; i++){
        scanf("%d\n", &n);
        checker[n-1] = 1;
    }
    for(int i = 0; i <= 29; i++){
        if(checker[i] != 1){
            printf("%d\n", i+1);
        }
    }
    
    return 0;
}
//배열 초기화 하기 초기화 안 하면 쓰레기 값이 들어가 있을 수 도 있음.
// 배열을 생성하면 초기화는 기본적으로 하자 값을 다 채울것이 아니고 특히 이런 판독 알고리즘은