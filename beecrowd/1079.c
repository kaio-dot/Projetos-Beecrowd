#include <stdio.h>

int main() {
    int n;
    float n1, n2, n3, mp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
       
        scanf("%f %f %f", &n1, &n2, &n3);

        mp = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
        printf("%.1f\n", mp);
    }

    return 0;
}
