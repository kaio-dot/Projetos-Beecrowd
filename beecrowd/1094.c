#include <stdio.h>

int main(){
    int n, totalCobaias, totalAcumulado = 0;
    char tipo;
    int coelhos=0, sapos=0, ratos=0;
    
    printf("Digite a quantidade de casos:\n");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        printf("Digite a quantidade e a cobaia(EX: 10 C):\n");
        fflush(stdout);
        scanf("%d %c", &totalCobaias, &tipo);
        totalAcumulado += totalCobaias;
         if( tipo == 'C'){
             coelhos += totalCobaias;
         }
         else if( tipo == 'R'){
             ratos += totalCobaias;
         }
         else if(tipo == 'S'){
             sapos += totalCobaias;
         }
        else{
            printf("TIPO NÃO PERMITIDO.\n");
        }
    }
    
    float percentualCoelhos = coelhos / (float)totalAcumulado*100;
    float percentualSapos = sapos / (float)totalAcumulado*100;
    float percentualRatos = ratos / (float)totalAcumulado*100;
    
        printf("Total: %d cobaias\n", totalAcumulado);
        printf("Total de coelhos: %d\n", coelhos); 
        printf("Total de ratos: %d\n", ratos);
        printf("Total de sapos: %d\n", sapos);
        printf("Percentual de coelhos: %.2f\n", percentualCoelhos);
        printf("Perentual de ratos: %.2f\n", percentualRatos);
        printf("Percentual de sapos: %.2f\n", percentualSapos);
    
    
    return 0;
}
