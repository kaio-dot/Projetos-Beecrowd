#include <stdio.h>
 
int main() {
  int num;
  double matriz[12][12], soma=0;
  char operacao;
  
  scanf("%d", &num);
  scanf(" %c", &operacao);
  
  for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
          scanf("%lf", &matriz[i][j]);
      }
  }
      for(int i=0;i<12;i++){
          soma += matriz[i][num];
  }
  
  if(operacao=='S'|| operacao=='s'){
      printf("%.1lf\n", soma);
  }
  else if(operacao=='M' || operacao=='m'){
      printf("%.1lf\n", soma/12);
  }
  
    return 0;
}
