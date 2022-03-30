#include <stdio.h>

int main ()
{
    int a,b,c;
    scanf("%d %d\n%d", &a, &b, &c);

    if(b+c>=60)
    {
        if (a+((b+c)/60)<=23)
        {
            printf("%d %d", a+((b+c)/60),(b+c)%60);
        }
        else
        {
            printf("%d %d", a+((b+c)/60)-24,(b+c)%60);
        }
    }
    else if(b+c<60)
    {
        printf("%d %d", a,(b+c)%60);
    }

    return 0;
}