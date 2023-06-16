#include <stdio.h>


int main() {

	int m = 0, n = 0;
    int result[101] = {0}; 
    char abc[7] = "ABCDEF";

	scanf("%d", &m);
    scanf("%d", &n);
	
    int i; 
    for(i = 0; m / n != 0; i++){
        result[i] = (m % n);
        m = m/n;
    }
    result[i] = m;
    for(int j = i; j >= 0; j--){
        // if(result[j] < 10){
        //     printf("%d", result[j]);
        // }else{
            
        //     if(result[j] == 10){
        //         printf("A");
        //     }else if(result[j] == 11){
        //         printf("B");
        //     }else if(result[j] == 12){
        //         printf("C");
        //     }else if(result[j] == 13){
        //         printf("D");
        //     }else if(result[j] == 14){
        //         printf("E");
        //     }else if(result[j] == 15){
        //         printf("F");
        //     }
        // }


        if(result[j] < 10){
            printf("%d", result[j]);
        } else {
            printf("%c", abc[result[j]%10]);
        }
        
    }

    return 0;
}