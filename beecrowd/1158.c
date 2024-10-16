#include <stdio.h>
 
int main() {
 int num, x, y;
 
    scanf("%d", &num);
    
    for(int i=0;i<num;i++){
        
        scanf("%d %d", &x, &y);
        
        int soma=0, count=0;
        
            while (count < y) {
            if (x % 2 != 0) { 
                soma += x;
                count++;
            }
            x++; 
        }
            printf("%d\n", soma);
    }
 
    return 0;
}
