#include <stdio.h>
#include <math.h>

int main(){
    int a[2], b[2], c[2];
    int condition=0;
    scanf("%d %d", &a[0], &a[1]);
    scanf("%d %d", &b[0], &b[1]);
    scanf("%d %d", &c[0], &c[1]);
    
    int A=pow(a[1]-b[1],2)+pow(a[0]-b[0],2);
    int B=pow(b[1]-c[1],2)+pow(b[0]-c[0],2);
    int C=pow(c[1]-a[1],2)+pow(c[0]-a[0],2);

    int max=0;
    max = ((A > B) && (A > C)) ? A : ((B > A) && (B > C)) ? B : C;

    if(a[0]==b[0]&&b[0]==c[0])
        condition=1;
    else if((a[1]-b[1])/(a[0]-b[0])==(c[1]-b[1])/(c[0]-b[0]))
        condition=1;
    
    if(condition==1)
        printf("X");
    else{
        if(A==B&&B==C)
            printf("JungTriangle");
        else if(A+B+C-2*max==0){
            if(A==B||B==C||C==A)
                printf("Jikkak2Triangle");
            else 
                printf("JikkakTriangle");
        }
        else if(A+B+C-2*max>0){
            if(A==B||B==C||C==A)
                printf("Yeahkak2Triangle");
            else 
                printf("YeahkakTriangle");
        }
        else if(A+B+C-2*max<0){
            if(A==B||B==C||C==A)
                printf("Dunkak2Triangle");
            else 
                printf("DunkakTriangle");
        }
    }
}   
