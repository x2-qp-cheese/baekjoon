#include <stdio.h>

int main(){
    int num=0;
    scanf("%d", &num);
    char right[100]={0,};
    int num1[100]={0,};
    int i=0;
    int count;

    while(i!=num){
        scanf("%s", right);
        count=0;
        for(int j=0;;j++){
            if(right[j]=='O')
                count++;
            else if(right[j]=='X')
                count=0;
            else
                break;
            num1[i]+=count;
        }
        i++;
    }

    for(int i=0; i<num; i++){
        printf("%d\n", num1[i]);
    }
    

    
}