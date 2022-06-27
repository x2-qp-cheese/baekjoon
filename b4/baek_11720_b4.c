#include <stdio.h>

int main(){
    int N, sum=0;
    scanf("%d", &N);
    char number[N];
    scanf("%s", number);


    for(int i=0; i<N; i++)
        sum+=number[i]-'0';

    printf("%d", sum);
}

