#include <stdio.h>
 
int main() {
 
int vet[10], num;

    scanf("%d", &num);
    
        vet[0]=num;
        
    for(int i=1;i<10;i++){
        vet[i]=vet[i-1]*2;
        }
    for(int j=0;j<10;j++){
    printf("N[%d] = %d\n", j, vet[j]);
    }
    return 0;
}
