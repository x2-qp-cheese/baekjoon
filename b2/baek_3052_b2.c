#include <stdio.h>

int main(){
    int num[10];
    int count=0;
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        num[i]=num[i]%42;
    }
    int check[50]={0,};
    for(int i=0; i<50; i++)
        for(int j=0; j<10; j++){
            if(i==num[j]){
                check[i]++;
            }
        }

    for(int i=0; i<50; i++){
        if(check[i]!=0)
            count++;
    }
       
    
    printf("%d", count);
    return 0;
}