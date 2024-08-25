#include <stdio.h>

int main()
{
   int golsGremio=0, golsInter=0, totalGrenais=0, vitoriaInter=0, vitoriaGremio=0, empate=0;
   int escolha;
   do{
       scanf("%d %d", &golsInter, &golsGremio);
       printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &escolha);
       totalGrenais++;
       golsGremio++;
       golsInter++;
         if(golsInter>golsGremio){
             vitoriaInter++;
         }
         else if(golsGremio>golsInter){
             vitoriaGremio++;
         }
         else{
             empate++;
         }
         
         
         if(escolha==2){
        break;
    } 
    
   }while(escolha==1);
    
        printf("%d grenais\n", totalGrenais);
        printf("Inter:%d\n", vitoriaInter);
        printf("Gremio:%d\n", vitoriaGremio);
        printf("Empates:%d\n", empate);
        if(vitoriaGremio>vitoriaInter){
            printf("Gremio venceu mais\n");
        }
        else{
            printf("Inter venceu mais\n");
        }
    return 0;
}
