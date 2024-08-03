#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    float A, B, C;
    float lado1, lado2, lado3;
    float perimetro, area;
    
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    
    A=lado1;
    B=lado2;
    C=lado3;
    
    perimetro= lado1+lado2+lado3;
    area=(lado1+lado2)*lado3/2;
    
    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        printf("Area = %.1f\n", area);
    }

    return 0;
}
