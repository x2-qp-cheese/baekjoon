#include <stdio.h>
#include <string.h>

int main(){
    int a;
    scanf("%d", &a);
    int b[a];
    char string[20];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
        scanf("%s", string);
        for(int j=0; j<strlen(string); j++){
            for(int k=0; k<b[i]; k++){
                printf("%c", string[j]);
            }
        }
        printf("\n");
    }
}