#include <stdio.h>
#include <stdlib.h>

int main(){
       int senha, senhaTry;
       
       senha=2002;
       
        do{
            scanf("%d", &senhaTry);
            
            if(senhaTry!=senha){
            printf("Senha Invalida\n");
             }
             fflush(stdout);
        }
        while(senhaTry != senha);
        
                if(senhaTry == senha){
                    printf("Acesso Permitido\n");
                    
                }
     
    return 0;
}
