#include <stdio.h>
 
int main() {
 int X;
 
 do{
     scanf("%d", &X);
     if (X == 0) {
            break; 
        }
     for(int i=1;i<=X;i++){
         if(i==X){
            printf("%d", i);
         }
         else{
     printf("%d ", i);
    }
 }
 printf("\n");
 }while(X!=0);

 
    return 0;
}
