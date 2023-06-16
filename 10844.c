//쉬운 계단 수
#include <stdio.h>

int stairs(int n)
{
    int s[n];
    int t = 0;
    // 순서대로 했을 때
        for (int j = 1; j <= 9; j++)
        {
            for (int i = 0; i <= n - 1; i++)
            {
                if (s[n-1] != 9 && (j + i)/10 == 0)
                {
                    s[i] = j + i;
                    printf("%d ", s[i]);
                    t++;
                }else{
                    break;
                }
            }
        }
    //반복되는 숫자들일때
    // for (int j = 1; j <= 9; j++)
    // {
    //     for (int i = 0; i <= n - 1; i++)
    //     {
    //         s[i] = j + i;
    //         t++;
    //     }
    // }

    return t + 1;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", stairs(n) % 1000000000);
    return 0;
}

// int stairs(int n){
//     int s[n];
//     int t = 0;
//     for(int i = 0; i <= n - 1; i++){
//         for(int j = 1; j <= 9; j++){
//             if(i == 0){
//                 s[i] = 1;
//                 t++;
//             }
//             else if(i == 1){
//                 s[i] = 2;
//                 t++;
//             }
//             else{
//                 s[i] = s[i-1] + s[i-2];
//                 t++;
//             }
//         }
//     }
//     return t;
// }

// // 순서대로 했을 때
//     if (n < 10)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             for (int i = 0; i <= n - 1; i++)
//             {
//                 if (s[n-1] != 9)
//                 {
//                     s[i] = j + i;
//                     printf("%d ", s[i]);
//                     t++;
//                 }else{
//                     break;
//                 }
//             }
//         }
//     }