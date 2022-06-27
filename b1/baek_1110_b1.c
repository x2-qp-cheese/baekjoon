#include <stdio.h>

int main()
{
    int num1=0;
    scanf("%d", &num1);
    int num2=num1;
    int count=0;
    
    for(int i=0;;i++)
    {
        if(num2<10){
            num2=10*num2+num2;
        }
        else{
            if((num2/10+num2%10)>=10){
                num2=10*(num2%10)+(num2/10+num2%10)%10;
            }
            else{
                num2=10*(num2%10)+(num2/10+num2%10);
            }
        }
        count++;
        if(num2==num1)
            break;
    }
    printf("%d", count);
    return 0;
}