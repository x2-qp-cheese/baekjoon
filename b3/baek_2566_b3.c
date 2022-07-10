#include <stdio.h>

int main(){
    int array[9][9];
    int max=0;
    int hang;
    int yeol;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &array[i][j]);
            if(array[i][j]>=max){
                max=array[i][j];
                hang=i;
                yeol=j;
            }
        }
    }
    printf("%d\n%d %d",max,hang+1,yeol+1);

}