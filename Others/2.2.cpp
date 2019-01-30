#include <stdio.h>

int T[1000005];
int S[1000005];

int main() {
    int n;
    int a = 0;
    int b = 0;
    char ch;
    T[0] = 0;
    S[0] = 0;
    int j = 1;
    int i;
    scanf("%d\n", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%c", &ch);
        if (ch == 'T') {
            continue;
        } else if (ch == 'A') {
            a++;
            b++;
        } else {
            if (a != 0) {
                a--;
                b++;
            } else {
                T[j] = i;
                S[j] = j + b;
                j++;
            }
        }
    }
    T[j] = n + 1;
    S[j] = j + b;
    j++;
    int maxi = 0;
    int now;
    for (i = 0; i < j; ++i) {
        now = (T[i+1] - T[i]) - (S[i+1] - S[i]);
        if (now > maxi) {
            maxi = now;
        }
    }
    printf("%d", maxi);
    return 0;
}
