#include <stdio.h>

int main()
{
    int n;
    int max=0;
    float avg=0;
    scanf("%d", &n);

    int score[n];

    for(int i=0; i<n; i++){
        scanf("%d", &score[i]);
        if(max<score[i]){
            max=score[i];
        }
    }

    for(int i=0; i<n; i++){
        avg +=(float)score[i]/max*100;
    }

    printf("%f\n", avg/n);
    return 0;
}