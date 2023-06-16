#include<stdio.h>

int main(void){

    int c;

    scanf("%d", &c);

    for(int i = 1; i <=c; i++){

        double n;
        int score[1002] = {0};
        double total = 0;
        scanf("%lf", &n);

        for(int j = 1; j <= n; j++){
            
            scanf("%d", &score[j]);
            total += score[j];

        }

        double average = total/n;
        double student = 0;
        for(int j = 1; j <= n; j++){

            if(score[j] > average){
                student++;
            }

        }
        double percent;

        percent = (student/n)*100;
        


        printf("%0.3lf%%\n", percent);


    }


    return 0;
}