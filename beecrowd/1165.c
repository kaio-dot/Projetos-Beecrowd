#include <stdio.h>
 
int main() {
 
   int N, primo, resultado=0;
   
   scanf("%d", &N);
   
   for(int i=0;i<N;i++){
       
       scanf("%d", &primo);
       
        for(int i=2;i<=primo/2;i++){
            if(primo%i==0){
                resultado++;
                break;
            }
            resultado=0;
        }
        if(resultado==0){
            printf("%d eh primo\n", primo);
        }
        else{
            printf("%d nao eh primo\n", primo);
        }
        
   }
 
    return 0;
}
