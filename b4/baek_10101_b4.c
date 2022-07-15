#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    int add=a+b+c;

    if(add==180){
        if(a==b&&a==c)
            printf("Equilateral");
        else if(a!=b&&b!=c&&c!=a)
            printf("Scalene");
        else
            printf("Isosceles");
    }
    else
        printf("Error");
}