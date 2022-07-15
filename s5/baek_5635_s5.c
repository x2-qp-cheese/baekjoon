#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    char name[n][16];
    int max=0, min=0;
    int day[n], month[n], year[n];
    for(int i=0; i<n; i++){
        scanf("%s %d %d %d", name[i], &day[i], &month[i], &year[i]);
    }
    for(int j=0; j<n; j++){
        if(year[j]<year[max])
            max=j;
        else if(year[j]==year[max]){
            if(month[j]<month[max])
                max=j;
            else if(month[j]==month[max]){
                if(day[j]<day[max])
                    max=j;
            }
        }
    }
    for(int j=0; j<n; j++){
        if(year[j]>year[min])
            min=j;
        else if(year[j]==year[min]){
            if(month[j]>month[min])
                min=j;
            else if(month[j]==month[min]){
                if(day[j]>day[min])
                    min=j;
            }
        }
    }
    printf("%s\n%s",name[min], name[max]);
}