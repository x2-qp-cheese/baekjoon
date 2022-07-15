#include <stdio.h>
#include <math.h>

int main(){
    double num[5];
    for(int i=0; i<5; i++)
        scanf("%lf", &num[i]);
    double korean=ceil(num[1]/num[3]);
    double math=ceil(num[2]/num[4]);
    
    if(korean>math)
        printf("%d", (int)(num[0]-korean));
    else
        printf("%d", (int)(num[0]-math));
}