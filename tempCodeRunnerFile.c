#include <stdio.h>

long long Z (long long n){
    long long temp = 1;
    if(n == 0){
        return 1;
    }else{
        for(int i = 0; i < n; i++){
        temp = 10 * temp;
        }
        return temp;
    }
    
}


int main() {

	long long n = 0, result = 0;
	scanf("%lld", &n);
    long i; 

    for(i = 0; n / 2 != 0; i++){
        result += (n%2) * (Z(i));
        n = n/2;
    }
    result += n * (Z(i));
    printf("%lld", result);

    return 0;
}
