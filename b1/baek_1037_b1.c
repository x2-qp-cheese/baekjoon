#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int yaksuu[N];
    int count=0;
    int result=1;

    for(int i=0; i<N; i++)
        scanf("%d", &yaksuu[i]);
    
    for(int j=2; ;j++){
        result++;
        if(result%j==0){
            for(int i=0; ;i++){
                if(j==yaksuu[i])
                    break;
            }
            count++;
        }
        
        if(count==N+2)
            break;
    }
    printf("%d", result);
}