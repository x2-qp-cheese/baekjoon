#include <stdio.h>

int main(){ 
    int N;
    scanf("%d", &N);
    char name[N+1][16];
    int day[N];
    int month[N];
    int year[N];
    int max, min;

    for(int i=0; i<N; i++){
        scanf("%s %d %d %d", name[i], &day[i], &month[i], &year[i]);
    }
    max=0;
    min=0;
    for(int i=0; i<N; i++){
        if(year[max]>year[i])
            max=i;
        if(year[max]<year[i])
            min=i;
        
        if(year[max]==year[i]){
            if(month[max]>month[i])
                max=i;
            
            if(month[max]==month[i]){
                if(day[max]>day[i])
                    max=i;
            }
        }
        if(year[min]==year[i]){
            if(year[max]<month[i])
                min=i;
            
            if(month[min]==month[i]){
                if(day[min]<day[i])
                    min=i;
            }
        }
    }
    printf("%s\n%s", name[min], name[max]);   
}
