#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int size = 1000001;
    int prime[size];

    for(int i=0; i <= size; i++)
        prime[i] = 1;

    for(int i=2; i<=n; i++){
        for(int j=i*2; j<=n; j+=i){
            prime[j]=0;
        }
    }
    for(int i=m; i<=n; i++)
        if(prime[i]!=0)
            printf("%d\n", i);
}

