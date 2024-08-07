#include <stdio.h>
 
int main() {
    int i=1, j=7;
    do{
        printf("I=%d J=%d\n", i, j);
        j-=1;
        printf("I=%d J=%d\n", i, j);
        j-=1;
        printf("I=%d J=%d\n", i, j);
        j+=4;
        i+=2;
    }while(i<10);
    return 0;
}
