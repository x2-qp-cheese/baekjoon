#include <stdio.h>

void sosu(int m, int n){
    int size = n+1;
    int prime[size];
    for(int i=0; i < size; i++)
        prime[i] = i;
    for(int i=2; i*2<size; i++)
    {
        if(prime[i] == 0)
            continue;
        
        for(int w = i, j=i; w*j <size; j++)
            prime[w*j] = 0;
    }
    for(int i=m; i<size; i++)
        if(prime[i]!=0)
            printf("%d\n", prime[i]);
}

int main(){
    int m,n;
    scanf("%d %d",&m ,&n);
    sosu(m, n);
}