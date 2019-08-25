#include <cstdio>

int n;
int flag;

int main() {
    scanf("%d", &n);
    for (int i=n; i>=0; i--) {
        int temp;
        scanf("%d", &temp);
        if (temp == 0) continue;
        if (i != n && temp > 0) printf("+");
        if (temp == 1 && i!= 0) {
        } else if (temp == -1 && i != 0) {
            printf("-");
        } else {
            printf("%d", temp);
        }
        if (i == 0) {
        } else if (i == 1) {
            printf("x");
        } else {
            printf("x^%d", i);
        }
    }
    return 0;
}
