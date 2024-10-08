#include <stdio.h>
 
int main() {
 int A, N;
 int soma=0;
    
    scanf("%d", &A);
    
    do{
        scanf("%d", &N);
    }while(N<0 || N==0);
   
   
    for(int i=0;i<N;i++){
        soma += A+i;
    }
    
    printf("%d\n" ,soma);
    return 0;
}
