#include <stdio.h>
 
int main() {
 int vet[20], fim=19, temp;
 
 for(int i=0;i<20;i++){
     scanf("%d", &vet[i]);
 }
 
 for(int j=0;j<10;j++){
     temp=vet[j];
     vet[j]=vet[fim];
     vet[fim]=temp;
     fim--;
 }
 
for(int k=0;k<20;k++){
    printf("N[%d] = %d\n", k, vet[k]);
}
 
    return 0;
}
