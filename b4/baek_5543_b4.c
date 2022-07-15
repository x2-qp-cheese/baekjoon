#include <stdio.h>

int main(){
    int sangduk, joongduk, haduk;
    int coke, sprite;
    int min_ham, min_drink;
    scanf("%d\n%d\n%d\n%d\n%d", &sangduk, &joongduk, &haduk, &coke, &sprite);

    if(coke>sprite)
        min_drink=sprite;
    else
        min_drink=coke;
    
    if(sangduk < joongduk && sangduk < haduk)
        min_ham = sangduk;
    else if(joongduk < haduk)
        min_ham = joongduk;
    else
        min_ham = haduk;

    printf("%d", min_drink + min_ham - 50);
}