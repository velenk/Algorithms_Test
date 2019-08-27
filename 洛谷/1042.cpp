#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

char ch;
char s[1000000];
int a1, b1, a2, b2, c1, c2;

int main() {
    c1 = c2 = a1 = a2 = b1 = b2 = 0;
    int now = 0;
    while (1) {
        scanf("%c", &ch);
        if (ch == 'W' || ch == 'E' || ch == 'L') {
            s[now] = ch;
            now++;
        }
        if (ch == 'E') break;
    }
    for (int i=0; s[i] != 'E'; i++) {
        if (s[i] == 'W') {
            a1++;
        } else {
            b1++;
        }
        c1++;
        if ((a1 >= 11 || b1 >= 11) && abs(a1-b1) > 1) {
            printf("%d:%d\n", a1, b1);
            c1 = a1 = b1 = 0;
        }
    }
    printf("%d:%d\n", a1, b1);
    printf("\n");
    for (int i=0; s[i] != 'E'; i++) {
        if (s[i] == 'W') {
            a2++;
        } else {
            b2++;
        }
        c2++;
        if ((a2 >= 21 || b2 >= 21) && abs(a2-b2) > 1) {
            printf("%d:%d\n", a2, b2);
            c2 = a2 = b2 = 0;
        }
    }
    printf("%d:%d\n", a2, b2);
    return 0;
}
