#include <stdio.h>

int main()
{
    int m, n,menor, maior;

    while(1){
        scanf("%d %d", &m, &n);
        
            if(m<=0 || n<=0){
                break;
            }
            if(m>n){
                maior=m;
                menor=n;
            }
            else{
                maior=n;
                menor=m;
            }
            int soma=0;
            for(int i=menor;i<=maior;i++){
                printf("%d ", i);
                soma+=i;
            }
            
             printf("Sum=%d\n", soma);
        
    }

    return 0;
}
