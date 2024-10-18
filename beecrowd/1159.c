#include <stdio.h>
 
int main() {
 
    int X;
    
    do{
        scanf("%d", &X);
        if(X==0){
            break;
        }
        
        int soma=0;
        
        if(X%2!=0){
            X++;
        }
        
           for(int i=0;i<5;i++){
               soma+=X;
               X += 2;
           }
        
        printf("%d\n", soma);
        
    }while(X!=0);
 
    return 0;
}
