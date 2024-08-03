#include <stdio.h>

int main(){
    int hora_inicial, minuto_inicial,
        hora_final, minuto_final;
    long total_minutos_inicial, 
        total_minutos_final;
    int hora_duracao, minutos_duracao, total_minutos_duracao;
        
        //leitura
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    
    total_minutos_inicial= hora_inicial* 60 + minuto_inicial;
    total_minutos_final= hora_final *60 + minuto_final;
    total_minutos_duracao = total_minutos_final - total_minutos_inicial;
    
    
    if(total_minutos_final <= total_minutos_inicial){
        total_minutos_duracao += (24*60);
        
    }
        hora_duracao = total_minutos_duracao/60;
        minutos_duracao = total_minutos_duracao %60;
        
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora_duracao, minutos_duracao);
 return 0;
}
        
        
