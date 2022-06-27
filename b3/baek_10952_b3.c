#include <stdio.h>

int main()
{
    int A,B;
    int c[10000];
    for(int x=0; ;x++)
    {
        scanf("%d %d", &A, &B);
        if(A==0&&B==0){
            break;
        }
        else{
            c[x]=A+B;
        }
    }
    for(int x=0; ; x++)
    {
        if(c[x]==0)
            break;
        printf("%d\n", c[x]);
        
    }
}