#include <stdio.h>


 
 int main(){
     int horasViagem, velocidadeMedia;
     double distancia, litros;
     scanf("%d %d", &horasViagem, &velocidadeMedia);
     
     distancia = horasViagem * velocidadeMedia;
     litros = distancia/12;
     
     printf("%.3lf\n", litros);
     
     
     return 0;
 }
