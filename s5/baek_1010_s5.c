#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    long int N[testcase], M[testcase], result[testcase];
    for(int i=0; i<testcase; i++){
        scanf("%ld %ld", &N[i], &M[i]);
    }

    for(int i=0; i<testcase; i++){
        long long int bunjah=1, bunmo=1;
        if(M[i]/2<N[i])
            N[i]=M[i]-N[i];
        for(int j=M[i]; j>M[i]-N[i]; j--){
            bunjah*=j;
        }
        for(int k=N[i]; k>0; k--){
            bunmo*=(k);
        }
        result[i]=bunjah/bunmo;
    }
    for(int i=0; i<testcase; i++){
        printf("%ld\n", result[i]);
    }
}