#include <stdio.h>

int main(){
    int array[9]={0,};
    
    for(int i=0; i<9; i++){
        scanf("%d", &array[i]);
    }

    int max=array[0];
    int max_num=0;

    for(int i=0; i<9; i++){
        if(max<array[i]){
            max=array[i];
            max_num=i;
        }
    }

    printf("%d\n%d",max, max_num+1);
    
    return 0;
}