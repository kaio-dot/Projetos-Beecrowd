#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char str[]);

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    
    while (n--) {
        char str[1001];
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        
        criptografar(str);
        printf("%s\n", str);
    }
    
    return 0;
}

void criptografar(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (isupper(str[i]) || islower(str[i])) {
            str[i] = str[i] + 3;
        }
    }
    
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    int metade = len / 2;
    for (int i = metade; i < len; i++) {
        str[i] = str[i] - 1;
    }
}
