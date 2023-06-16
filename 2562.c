#include<stdio.h>

int main(void){
    int arr[9];
    int max = 0;
    for(int i = 0; i <= 8; i++){
        scanf("%d\n", &arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i = 0; i <= 8; i++){
        if(max == arr[i]){
            printf("%d\n%d", arr[i], i +1);
        }
    }
    
}