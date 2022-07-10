#include <stdio.h>

int min=10000;

int find_sosu(int m, int n){
    int count=0;
    int add=0;
    for(int i=m; i<=n; i++){
        count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
                count++;
        }
        if(count==2){
            add+=i;
            if(min>i)
                min=i;
        }
    }
    if(add>0){
        return add;
        return min;
    }
    else 
        return -1;
}

int main(void){
    int M;
    int N;
    scanf("%d", &M);
    scanf("%d", &N);
    if(find_sosu(M,N)==-1)
        printf("-1");
    else
        printf("%d\n%d",find_sosu(M,N), min);
}