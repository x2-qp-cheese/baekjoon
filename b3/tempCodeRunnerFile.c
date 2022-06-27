#include <stdio.h>

int main()
{
    int N,X,first_number;
    scanf("%d", &N);
    scanf("%d", &first_number);
    int number1[N];
    for(X=0;X<N;X++)
    {
        scanf("%d", &number1[X]);
    }
    for(X=0;X<N;X++)
    {
        if(number1[X]<first_number)
            printf("%d ", number1[X]);
    }
}