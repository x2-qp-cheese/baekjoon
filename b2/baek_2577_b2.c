#include <stdio.h>

int main(){
    int array[3];
    int mult;
    for(int i=0; i<3; i++){
        scanf("%d",&array[i]);
    }
    mult=array[0]*array[1]*array[2];
    int num[10]={0,};
    int i;
    while(mult!=0){
        i=mult%10;
        
        num[i]++;
        mult=mult/10;
        
    }
    for(int i=0; i<10; i++){
        printf("%d\n", num[i]);
    }
    return 0;

}