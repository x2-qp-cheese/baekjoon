#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int alphabet[26];
    scanf("%s", s);

    for(int i=0; i<26; i++){
        alphabet[i]=-1;
        for(int j=0; j<strlen(s);j++){
            if(s[j]==97+i){
                alphabet[i]=j;
                break;
            }
        }
        printf("%d ", alphabet[i]);
    }
}