#include <stdio.h>

int main(){
    int score[6];
    int add=0, score_min=101;
    for(int i=0; i<4; i++){
        scanf("%d", &score[i]);
        add+=score[i];
        if(score_min>score[i])
            score_min=score[i];
    }
    for(int i=4; i<6; i++)
        scanf("%d", &score[i]);
    
    if(score[4]<score[5])
        printf("%d", add+score[5]-score_min);
    else
        printf("%d", add+score[4]-score_min);
}