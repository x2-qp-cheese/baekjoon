#include <stdio.h>

int main(){
    int score[5];
    int add=0;
    for(int i=0; i<5; i++){
        scanf("%d", &score[i]);
        if(score[i]<40)
            score[i]=40;
        add+=score[i];
    }
    printf("%d", add/5);
}