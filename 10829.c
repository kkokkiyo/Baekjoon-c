#include <stdio.h>


int main() {

	long long n = 0;
    int result[101] = {0}; // 배열이 100개 있으면 1 * 10^100의 수가 있는것이다.
   // 1xxx,xxx,xxx...이렇게 표현할 수 있으므로, 예를 들어백만이라는 수를 표현할라면 배열로는 7칸이면 충분하다. 

	scanf("%lld", &n);
	
    int i; 
    for(i = 0; n / 2 != 0; i++){
        result[i] = (n % 2);
        n = n/2;
    }
    result[i] = n;
    for(int j = i; j >= 0; j--){
        printf("%d", result[j]);
    }

    return 0;
}

    // int result = 0;
    // int e = 0;
    // while (addAll / 8 != 0) {
    //     result += addAll % 8 * Z(e);
    //     e++;
    //     addAll /= 8;
    // }
    // result += addAll*Z(e);
    // printf("%d", result);
