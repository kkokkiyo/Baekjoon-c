#include <stdio.h>

int main(void)
{
    // int n, x, t = 0;
    // scanf("%d %d", &n, &x);
    // int a[n];
    // int b[n];
    // for(int i = 0; i <= n-1; i++){
    //     scanf("%d", &a[i]);
    //     if(a[i] < x){
    //         b[t] = a[i];
    //         t++;
    //     }
    // }
    // for(int i = 0; i <= t - 1; i++){
    //     printf("%d ", b[i]);
    // }
    int n, x, t = 0;
    scanf("%d %d", &n, &x);
    int b[n];
    int a;
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a);
        if (a < x)
        {
            b[t] = a;
            t++;
        }
    }
    for (int i = 0; i <= t - 1; i++)
    {
        printf("%d ", b[i]);
    }
    //밑에 방식으로 하는게 더 좋음
    //배열의 크기는 입력받을 수 있는 배열의 최대 크기로 하는게 좋음
    //밑에 방식은 배열을 하나만 쓰고 배열에 조건에 맞는것 만 넣어줄 수 있음
    return 0;
}