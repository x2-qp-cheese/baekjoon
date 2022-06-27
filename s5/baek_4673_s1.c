#include <stdio.h>

int check(int num){
    int check_num=1;
    int checking;
    int check;
    while(check_num<num){
        checking=check_num;
        check=checking;
        while(checking!=0){
            check+=checking%10;
            checking/=10;
        }
        if(check==num)
            return 1;
        check_num++;
    }
    return 0;
}


int main(){
    int number=1;
    while(number<10000){
        if(check(number)==0){
            printf("%d\n", number);
        }
        number++;
    }
}