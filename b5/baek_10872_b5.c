#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int result=1;
    
    if(N!=0){
        while(N!=1){
            result*=N;
            N--;
        }
    }
    printf("%d", result);
}