#include <stdio.h>

int p[100], t[100];

int main() {
    int n, i, diff;
    int res = 0, min_diff = 1000000;
    int p_used = 0, t_used = 0;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < n; ++i) {
        scanf("%d", &t[i]);
    }

    for (i = 0; i < n; ++i) {
        if (p[i] >= t[i]) {
            res += p[i];
            p_used = 1;
            diff = p[i] - t[i];
        } else {
            res += t[i];
            t_used = 1;
            diff = t[i] - p[i];
        }
        if (min_diff > diff) {
            min_diff = diff;
        }
    }

    printf("%d\n", p_used && t_used ? res : res - min_diff);
    return 0;
}
