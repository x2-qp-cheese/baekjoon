#include <stdio.h>
#include <string.h>
char words[1000001];

int main(){
    int count=0;
    fgets(words,1000001,stdin);

    for(int i=0; i<strlen(words); i++){
        if(words[i]!=' '&&words[i+1]==' '){
            count++;
        }
        else if(words[i]!=' '&&i+2==strlen(words)){
            count++;
        }
    }
    
    printf("%d", count);
}