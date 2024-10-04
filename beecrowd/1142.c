#include <stdio.h>
 
int main() {
    int N;
    int count=0;
    scanf("%d" ,&N);
    
    for(int i=0;i<N;i++){
        printf("%d %d %d PUM\n", count+1, count+2, count+3);
        
        count+=4;
    }
  
 
    return 0;
}
