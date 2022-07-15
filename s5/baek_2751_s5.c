#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int number[N];
    int temp;
    for(int i=0; i<N; i++){
        scanf("%d", &number[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N-1; j++){
            if(number[j]>number[j+1]){
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
        printf("%d\n", number[i]);
    }
}