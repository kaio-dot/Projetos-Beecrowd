#include <stdio.h>

int main(){
    int n,n1;

    scanf("%d", &n);

    for(int i=0;i<n; i++){
        scanf("%d",&n1);
        if(n1 % 2 == 0 && n1>0){
            printf("EVEN POSITIVE\n");
        }else if(n1 % 2 == 0 && n1<0){
            printf("EVEN NEGATIVE\n");
        }else if(n1 % 2 !=0 && n1>0){
            printf("ODD POSITIVE\n");
        }else if(n1 % 2 !=0 && n1<0){
            printf("ODD NEGATIVE\n");
        }else if(n1 == 0){
            printf("NULL\n");
        }
    }
return 0;
}
