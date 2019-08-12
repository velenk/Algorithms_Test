#include <cstdio>

int ans;
int  s[100];

int main() {
    int now = 0;
    char ch;
    for (int i = 0; i <= 12; i++) {
        scanf("%c", &ch);
        if (ch == '-') continue;
        if (ch == 'X') {
            s[now] = 10;
            now++;
            continue;
        }
        s[now] = ch-'0';
        now++;
    }
    int ans = 0;
    for (int i = 0; i <= 8; i++) {
        ans += s[i]*(i+1);
        ans %= 11;
    }
    if (ans == s[9]) {
        printf("Right\n");
    } else {
        s[9] = ans;
        for (int i = 0; i <= 9; i++) {
            if (i == 1|| i==4||i==9) printf("-");
            if (s[i] == 10) {
                printf("X");
                continue;
            }
            printf("%d", s[i]);
        }
    }
    return 0;
}
