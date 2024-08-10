#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
     int x, y, qtd;
     float resultado;
     
        scanf("%d", &qtd);
        
        for(int i=0;i<qtd;i++){
                scanf("%d %d", &x, &y);
                if(y == 0){
                        printf("divisao impossivel\n");
                    }
                    else{
                        resultado = (float)x/y;
                        printf("%.1f\n", resultado);
                    }
        }
    return 0;
}
