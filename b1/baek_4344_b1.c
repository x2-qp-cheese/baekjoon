#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    int student_num[10000]={0,};
    int score[10000]={0,};
    int score_add[10000]={0,};
    double before_result[10000]={0,};
   

    for(int i=0; i<testcase; i++){
        scanf("%d", &student_num[i]);
        for(int j=0; j<student_num[i]; j++){
            scanf("%d", &score[j]);
            score_add[i]+=score[j];
        }
        for(int j=0; j<student_num[i]; j++){
            if(score[j]>score_add[i]/student_num[i]){
                before_result[i]++;
            }
        }
    }

    for(int i=0; i<testcase; i++){
        printf("%.3lf%%\n", before_result[i]/(double)student_num[i]*100);
    }
}