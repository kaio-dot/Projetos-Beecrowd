#include <stdio.h>

int main() {
    int n, max = 0, pos = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
            pos = i;
        }
    }

    printf("%d\n", max);
    printf("%d\n", pos);

    return 0;
}
