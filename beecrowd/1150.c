#include <stdio.h>
 
int main() {
    int x, z;
    int countConsec=0, novoX;
    
    scanf("%d", &x);
    
    do{
        scanf("%d", &z);
    }while(z<=x);
    
    novoX=0;
    
    for(int i=x;novoX<=z;i++){
       novoX += i;
       countConsec++;
        if(novoX>z){
            break;
        }
    }
    
    printf("%d\n", countConsec);
    
   
    return 0;
}
