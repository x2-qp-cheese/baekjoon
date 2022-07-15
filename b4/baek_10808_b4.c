#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[101];
    int count[26]={0,};
    scanf("%s", alphabet);
    for(int i=0; i<strlen(alphabet); i++)
        count[alphabet[i]-97]++;
    
    for(int i=0; i<26; i++)
        printf("%d ", count[i]);
}