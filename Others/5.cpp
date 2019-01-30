#include <stdio.h>

int main() {
    int n1;
    scanf("%d", &n1);
    for (int j = 0; j < n1; ++j) {
        long a[100001];
        int n;
        scanf("%d", &n);
        int mini1 = 9000, mini2 = 10000;
        for (int i = 0; i < n; ++i) {
            scanf("%ld", &a[i]);
            if (a[i] < mini2) {
                mini2 = a[i];
                if (mini2 < mini1) {
                    int t = mini2;
                    mini2 = mini1;
                    mini1 = t;
                }
            }
        }
        int maxi = 1;
        int k = 2;
        while (1) {
            int m = 0;
            int flagk = 1;
            for (int i = 0; i < n; ++i) {
                if (a[i] % k) {
                    m++;
                    if (m > 1) {
                        flagk = 0;
                        break;
                    }
                }
            }
            if (flagk) {
                maxi = k;
            }
            k++;
            if (k > mini2) {
                break;
            }
        }
        printf("%d\n", maxi);
    }
    return 0;
}
