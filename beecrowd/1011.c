#include <stdio.h>
#include <math.h>
#define PI 3.14159


 
int main() {
double raio, volume;
scanf("%lf", &raio);

volume = 4.0/3*PI*(raio*raio*raio);

printf("VOLUME = %.3lf\n", volume);


    return 0;
}
