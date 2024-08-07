#include <stdio.h>


int main(){
    int i=1;
    
    do{
        printf("I=%d J=7\n", i);
        printf("I=%d J=6\n", i);
        printf("I=%d J=5\n", i);
        i+=2;
    }while(i<10);
    return 0;
}
