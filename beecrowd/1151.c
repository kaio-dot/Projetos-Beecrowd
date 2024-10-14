#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);

    printf("%d", t1);
    
    for (int i = 1; i < n; i++) {
        printf(" %d", t2);  
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");  
    return 0;
}
