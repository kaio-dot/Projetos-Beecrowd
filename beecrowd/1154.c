#include <stdio.h>
 
int main() {
 
   int idade;
   int countIdade=0, count=0;
   double media;
   do{
       scanf("%d", &idade);
       if(idade>0){
       countIdade += idade;
       count++;
       }
   }while(idade>0);
   
   media = (double)countIdade/count;
   
   printf("%.2lf\n", media);
   
    return 0;
}
