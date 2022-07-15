#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num/100==0)
        printf("%d", num%10+num/10);
    
    else if(num/10==10)
        printf("%d", num%10+10);

    else if(num%10==0)
        printf("%d", num/100+10);
        
    else
        printf("20");
}
