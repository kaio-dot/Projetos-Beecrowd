#include <stdio.h>
 
int main() {
 
int vetPar[5], vetImpar[5], countPar=0, countImpar=0, num;

for(int i=0;i<15;i++){
    scanf("%d", &num);
        if(num%2==0){
            vetPar[countPar]=num;
            countPar++;
        }
        else if(num%2!=0){
            vetImpar[countImpar]=num;
            countImpar++;
        }
        
        if(countPar==5){
            for(int j=0;j<5;j++){
                printf("par[%d] = %d\n", j, vetPar[j]);
            }
            countPar=0;
        }
        
        if(countImpar==5){
            for(int k=0;k<5;k++){
            printf("impar[%d] = %d\n", k, vetImpar[k]);
            }
            countImpar=0;
        }
    
}

for(int j=0;j<countImpar;j++){
    printf("impar[%d] = %d\n", j, vetImpar[j]);
}

for(int i=0;i<countPar;i++){
    printf("par[%d] = %d\n", i, vetPar[i]);
}

 
    return 0;
}
