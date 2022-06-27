#include <stdio.h>

int main(){
    int a=1;
    int b=a;
    int c=a;

    printf("%d %d %d\n", a,b,c);
    a++;
    printf("%d %d %d\n", a,b,c);
}