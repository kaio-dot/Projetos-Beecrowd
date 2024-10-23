#include <stdio.h>
 
int main() {
 int teste, num, fib;
 
 scanf("%d", &teste);
 
 for(int i=0;i<teste;i++){
     scanf("%d", &num);
    
    unsigned long long fibPrev=0, fibCur=1, fibProx;
    
    if(num==0){
        printf("Fib(0) = 0\n");
        continue;
    }
    else if(num==1){
        printf("Fib(1) = 1\n");
        continue;
    }
    
    for(int j=2;j<=num;j++){
        fibProx = fibPrev+fibCur;
        fibPrev=fibCur;
        fibCur=fibProx;
    }
    
    printf("Fib(%d) = %llu\n", num, fibCur);
    
    
 }
    return 0;
}
