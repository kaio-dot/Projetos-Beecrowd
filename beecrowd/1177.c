#include <stdio.h>
 
int main() {
 int T, vet[1000];
 do{
 scanf("%d", &T);
 }while(T<=2);
 
   
 for(int j=0;j<1000;j++){
     vet[j]=j%T;
     printf("N[%d] = %d\n", j, vet[j]);
 }
    return 0;
}
