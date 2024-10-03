#include <stdio.h>
int main() {
 int x,y,temp;
 int soma=0;
 
 scanf("%d %d", &x, &y);
 
 if(x>y){
 temp=x;
 x=y;
 y=temp;
}
 
 for(int i=x;i<=y;i++){
     if(i%13!=0){
         soma +=i;
     }
 }
 
 printf("%d\n", soma);
 
    return 0;

}
