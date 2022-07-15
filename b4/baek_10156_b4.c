#include <stdio.h>

int main(){
    int price, number, money;
    scanf("%d %d %d", &price, &number, &money);
    int result = price*number;
    
    if(result>=money)
        printf("%d", result-money);
    else
        printf("0");

    return 0;
}