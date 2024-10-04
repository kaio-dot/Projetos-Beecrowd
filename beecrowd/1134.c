#include <stdio.h>
 
int main() {
 int escolha;
 int alcool=0, gasolina=0, diesel=0;
 
 do{
     scanf("%d", &escolha);
     
     if(escolha==1){
         alcool++;
     }
     else if(escolha==2){
         gasolina++;
     }
     else if(escolha==3){
         diesel++;
     }
 }while(escolha!=4);

     printf("MUITO OBRIGADO\n");
     printf("Alcool: %d\n", alcool);
     printf("Gasolina: %d\n", gasolina);
     printf("Diesel: %d\n", diesel);
 
    return 0;
}
