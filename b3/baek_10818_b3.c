#include <stdio.h>

int main()
{
    int num1=0;
    scanf("%d", &num1);
    int array[num1];

    for(int i=0; i<num1; i++){
        scanf("%d", &array[i]);
    }
    int min=array[0];
    int max=array[0];

    for(int i=0; i<num1; i++){
        if(array[i]<min){
            min=array[i];
        }
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("%d %d", min, max);

    return 0;
}