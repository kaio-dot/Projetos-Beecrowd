#include <stdio.h>

int main() {
    int entrada_ddd;
    int ddd[] = {61, 71, 11, 21, 32, 19, 27, 31};
    char *cidades[] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
  
    scanf("%d", &entrada_ddd);
    
   if (entrada_ddd == ddd[0])
        printf("%s\n", cidades[0]);
    else if (entrada_ddd == ddd[1])
        printf("%s\n", cidades[1]);
    else if (entrada_ddd == ddd[2])
        printf("%s\n", cidades[2]);
    else if (entrada_ddd == ddd[3])
        printf("%s\n", cidades[3]);
    else if (entrada_ddd == ddd[4])
        printf("%s\n", cidades[4]);
    else if (entrada_ddd == ddd[5])
        printf("%s\n", cidades[5]);
    else if (entrada_ddd == ddd[6])
        printf("%s\n", cidades[6]);
    else if (entrada_ddd == ddd[7])
        printf("%s\n", cidades[7]);
    else
        printf("DDD nao cadastrado\n");

    return 0;
}
