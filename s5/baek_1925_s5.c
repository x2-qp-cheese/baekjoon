#include <stdio.h>
#include <math.h>

int main(){
    int first[2], second[2], third[2];
    scanf("%d %d", &first[0], &first[1]);
    scanf("%d %d", &second[0], &second[1]);
    scanf("%d %d", &third[0], &third[1]);
    int a=fabs(pow(first[0]-second[0],2)+pow(first[1]-second[1],2));
    int b=fabs(pow(second[0]-third[0],2)+pow(second[1]-third[1],2));
    int c=fabs(pow(first[0]-third[0],2)+pow(first[1]-third[1],2));
    int max;
    if(a>b)
        if(a>c)
            max=a;
        else
            max=c;
    else
        if(b>c)
            max=b;
        else
            max=c;
    printf("%d %d %d\n", a, b,c);
    
    if(first[0]==second[0]&&first[0]==third[0])
        printf("X");
    
    else if(((first[1]-second[1])%(first[0]-second[0]))==((third[1]-second[1])%(third[0]-second[0]))&&((first[1]-second[1])%(first[0]-second[0]))==((third[1]-first[1])%(third[0]-first[0])))
        printf("X");

    else if(a==b||b==c||c==a){
        if(a==b&&b==c)
            printf("JungTriangle");
        else{
            if(2*max-a-b-c>0)
                printf("Dunkak2Triangle");
            else if(2*max-a-b-c<0)
                printf("Yeahkak2Triangle");
            else
                printf("Jikkak2Triangle");
        }
    }

    else{
        if(2*max-a-b-c>0)
            printf("DunkakTriangle");
        else if(2*max-a-b-c<0)
            printf("YeahkakTriangle");
        else
            printf("JikkakTriangle");
    }

}