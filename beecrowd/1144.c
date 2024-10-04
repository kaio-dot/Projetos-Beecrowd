#include <stdio.h>
 
int main() {
 int num;
 
 scanf("%d", &num);
 
 for(int i=1;i<=num;i++){
     printf("%d %d %d\n", i, i*i, i*i*i);
     printf("%d %d %d\n", i, i*i+1, i*i*i+1);
 }
  
    return 0;
}
