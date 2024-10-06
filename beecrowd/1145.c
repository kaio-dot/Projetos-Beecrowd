#include <stdio.h>
 
int main() {
    int X, Y, count=0;
    scanf("%d %d", &X, &Y);
    
    for(int i=1;i<=Y;i++){
       printf("%d", i);
       count++;
       
        if(count==X || i==Y){
            printf("\n");
            count=0;
        }
        else{
            printf(" ");
        }
       
    }
    
 
    return 0;
}
