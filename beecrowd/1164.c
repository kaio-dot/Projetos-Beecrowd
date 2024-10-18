#include <stdio.h>
 
int main() {
 
    int N, num ,N2;
    
    scanf("%d", &N);
    
    for(int i=0;i<N;i++){
        scanf("%d", &N2);
                num=0;
            for(int j=1;j<N2;j++){
                if(N2%j==0){
                    num+=j;
                }
            }
        if(num==N2){
            printf("%d eh perfeito\n", N2);
        }
        else{
            printf("%d nao eh perfeito\n", N2);
        }
        
    }
 
    return 0;
}
