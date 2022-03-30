#include <stdio.h>

int main ()
{
    int hour, minute;
    scanf ("%d %d", &hour, &minute);

    if(minute>=45)
    {
        printf("%d %d", hour, minute-45);
    }
    else if(minute<45)
    {
        if (hour!=0)
        {
            printf("%d %d", hour-1, minute+15);
        }
        else if (hour==0)
        {
            printf("23 %d", minute+15);
        }
    }

    return 0;
}