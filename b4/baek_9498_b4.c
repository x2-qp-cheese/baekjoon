#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if(90<=a && 100>=a)
    {
        printf("A\n");
    }
    else if(80<=a && a<90)
    {
        printf("B\n");
    }
    else if(70<=a && a<80)
    {
        printf("C\n");
    }
    else if(60<=a && a<70)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    return 0;
}