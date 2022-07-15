#include <stdio.h>

int main(){
    int a;
    int add=0;
    int minute, second;
    for(int i=0; i<4; i++){
        scanf("%d", &a);
        add+=a;
    }
    minute=add/60;
    second=add%60;

    printf("%d\n%d", minute, second);
}