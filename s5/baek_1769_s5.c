#include <stdio.h>

int main(){
    int x;
    int add=0;
    scanf("%d", &x);
    while(x!=0){
        printf("%d\n",x);
        add+=x%10;
        x/=10;
    }
}