#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int prime_num[N];
    int result=0;

    for(int i=0; i<N; i++){
        int count=0;
        scanf("%d", &prime_num[i]);
        for(int j=1; j<prime_num[i]; j++){
            if(prime_num[i]%j==0){
                count++;
            }
        }
        if(count==1)
            result++;
    }
    printf("%d", result);
}