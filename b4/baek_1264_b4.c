#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[256];
    while (sentence[0]!='#'){
        int count=0;
        scanf("%[^\n]s", sentence);
        for(int i=0; strlen(sentence); i++){
            if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u')
                count++;
        }
        printf("%d\n", count);
    }
}