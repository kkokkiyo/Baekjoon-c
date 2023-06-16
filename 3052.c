/*
문제
두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

입력
첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

출력
첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
*/

#include<stdio.h>

int main(void){
    int arr[10] = {0};
    int r[43] = {0};
    int temp = 0;

    for(int i = 0; i < 10; i++){
        int remain;
        scanf("%d", &remain);
        arr[i] = remain % 42;
        //받을 때 42로 나눈 나머지로 받기
    }
    for(int i = 0; i < 10; i++){
        r[arr[i]] = 1;
    }
    int result = 0;
    for(int i = 0; i < 42; i++){
        if(r[i] == 1){
            result++;
        }
    }
    printf("%d\n", result);


    return 0;

/*
42로 나눈 나머지들을 arr배열에 저장해두고, r배열을 0으로 초기화를 해준다.
arr배열을 끝까지 도는동안 r배열의 arr[i]번째에 1을 넣어준다.
마지막으로 42번을 돌면서 r배열의 몇번째에 1이 들어있는지를 따지면서 1이 들어있으면 변수를 1씩 높여주어 서로 다른 나머지의 갯수를 구한다. 
r배열을 42로 해놓은 이유는 42로 나눈 나머지는 42 이하일 것이니깐이고, 이렇게 배열을 생성한 이유는 겹치는 숫자가 없기때문이다.
*/

}