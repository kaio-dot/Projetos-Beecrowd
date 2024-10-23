#include <stdio.h>
 
int main() {
 
    double vet[100];
    
    for(int i=0;i<100;i++){
        scanf("%lf", &vet[i]);
    }
    
    for(int j=0;j<100;j++){
        if(vet[j]<=10){
            printf("A[%d] = %.1lf\n", j, vet[j]);
        }
    }
    
 
    return 0;
}
