#include <stdio.h>

int main(){
    int hour, minute, second;
    int time;
    scanf("%d %d %d", &hour, &minute, &second);
    scanf("%d", &time);
    hour+=time/3600;
    time%=3600;
    minute+=time/60;
    time%=60;
    second+=time;

    if(second>=60){
        minute+=(second/60);
        second-=(second/60)*60;
    }
    if(minute>=60){
        hour+=(minute/60);
        minute-=(minute/60)*60;
    }
    if(hour>=24){
        hour-=(hour/24)*24;
    }
    printf("%d %d %d", hour, minute, second);
}