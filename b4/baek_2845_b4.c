#include <stdio.h>

int main(){
    int l, p;
    int real[5];
    scanf("%d %d", &l, &p);
    int people = l*p;
    

    for(int i=0; i<5; i++){
        scanf("%d", &real[i]);
    }

    for(int i=0; i<5; i++)
        printf("%d ", real[i]-people);
}