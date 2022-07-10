#include <stdio.h>

int dagakhyeong(int n)
{
    int mult=1;
    if(n==3)
        return 0;
    else{
        for(int i=n-3; i<=n; i++){
            mult*=i;
        }
        return mult/24;
    }
}

int main(){
    int number;
    scanf("%d", &number);
    printf("%d", dagakhyeong(number));
}