/*
문제
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

출력
각 테스트 케이스마다 점수를 출력한다.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{

    char yesOrNo[80] = {0};
    int temp = 0, score = 0;
    int testCase = 0;

    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++)
    {
        scanf("%s", yesOrNo);

        for (int j = 0; j <= strlen(yesOrNo); j++)
        {
            if (yesOrNo[j] == 'O')
            {
                temp++;
                score += temp;
            }else{
                temp = 0;
            }
        }
        printf("%d\n", score);

        temp = 0;
        score = 0;
    }
}

/*
문자열은 scanf("%s", yesOrNo); 이렇게 받기
#include <string.h> 헤더파일을 이용하여
strlen(yesOrNo)이렇게 문자열의 길이를 받아서 이만큼만 반복문에서 돌기
*/