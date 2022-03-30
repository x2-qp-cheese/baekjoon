
#include <stdio.h>

int main ()
{
    int a, b, t, count=1;
    scanf("%d", &t);

    for (int i=1; i<=t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n",count,a+b);
        count++;
    }

    return 0;
}
