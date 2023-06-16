#include <stdio.h>

int main(void)
{
    int n, a;
    scanf("%d", &n);
    int max = -1000000, min = 1000000;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(max < a){
            max = a;
        }
        if(min > a){
            min = a;
        }
    }
    printf("%d %d", min, max);
    return 0;
}