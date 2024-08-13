#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    int opcao;
    
    do{
        do {
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10) {
            printf("nota invalida\n");
            }
        } while (nota1 < 0 || nota1 > 10);
    
    
        do {
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 10) {
            printf("nota invalida\n");
            }
        } while (nota2 < 0 || nota2 > 10);
    
    
        media = (nota1 + nota2) / 2;
    
    
        printf("media = %.2f\n", media);
        
            do{
                printf("novo calculo (1-sim 2-nao)\n");
                scanf(" %d", &opcao);
                } while(opcao !=1 && opcao !=2);
                
    } while(opcao == 1);

    return 0;
}
