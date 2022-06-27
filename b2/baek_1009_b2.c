#include <stdio.h>

int main(){
    int testcase, a, b, result=1;
    scanf("%d", &testcase);
    for(int i=0; i<testcase; i++){
        scanf("%d %d", &a, &b);
        result=1;
        for(int j=0; j<b; j++){
            result*=a;
            result%=10;
        }
        if(result==0){
            printf("10\n");
        }
        else 
            printf("%d\n", result);
    }
}