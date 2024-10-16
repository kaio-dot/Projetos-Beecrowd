#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    int fatorial = 1;
    for(int i=n;i>0;i--){
        fatorial *=i;;
    }
    printf("%d\n", fatorial);
 
    return 0;
}
