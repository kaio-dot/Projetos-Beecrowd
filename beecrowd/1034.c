#include <stdio.h>

int minBlocos(int blocos[], int n, int m) {
    int dp[m + 1];
    dp[0] = 0;

    for (int i = 1; i <= m; i++) {
        dp[i] = 1000001;
        for (int j = 0; j < n; j++) {
            if (blocos[j] <= i && dp[i - blocos[j]] + 1 < dp[i]) {
                dp[i] = dp[i - blocos[j]] + 1;
            }
        }
    }
    return dp[m];
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int blocos[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &blocos[i]);
        }

        int resultado = minBlocos(blocos, n, m);
        printf("%d\n", resultado);
    }

    return 0;
}
