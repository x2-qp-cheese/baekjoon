#include <stdio.h>
#include <string.h>


int main(){
    char number[10];
    char temp;
    scanf("%s", number);
    for(int i=0; i<strlen(number); i++){
        for(int j=i+1; j<strlen(number); j++){
            if(number[i]<number[j]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
    printf("%s", number);
}
