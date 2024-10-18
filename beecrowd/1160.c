#include <stdio.h>
 
int main() {
 
    int T;
    int PA, PB, anos;
    float G1, G2;
    
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        anos=0;
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
            while(PA<=PB && anos<=100){
                    PA+=(int)(PA*(G1/100.0));
                    PB+=(int)(PB*(G2/100.0));
                    anos++;
            }
            
            if(anos>100){
                printf("Mais de 1 seculo.\n");
            }
            else{
                printf("%d anos.\n", anos);
            }
            
    }
    
    return 0;
}
