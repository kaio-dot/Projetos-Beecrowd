#include <stdio.h>
 
int main() {
    int T;
    int vet[5];
    int count=0;
    
    scanf("%d", &T);
    
    for(int i=0;i<5;i++){
        scanf("%d", &vet[i]);
            if(vet[i]==T){
                count++;
            }
    }
    
    printf("%d\n", count);
    
 
    return 0;
}
