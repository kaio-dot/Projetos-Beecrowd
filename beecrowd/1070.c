#include <stdio.h>
 
int main() {
 int X;
 
 scanf("%d", &X);
 
  int contador = 0;
    while (contador < 6) {
        if (X % 2 != 0) {
            printf("%d\n", X);
            contador++;
        }
        X++;
    }
    return 0;
}
