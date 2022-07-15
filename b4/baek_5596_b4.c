#include <stdio.h>

int main(){
    int minguk[4];
    int mansae[4];

    int add_min=0;
    int add_man=0;

    for(int i=0; i<4; i++){
        scanf("%d", &minguk[i]);
        add_min+=minguk[i];
    }

    for(int i=0; i<4; i++){
        scanf("%d", &mansae[i]);
        add_man+=mansae[i];
    }

    printf("%d", add_min >= add_man? add_min : add_man);
}
