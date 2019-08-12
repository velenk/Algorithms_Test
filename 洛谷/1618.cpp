#include <cstdio>
#include <algorithm>

using namespace std;

int a[9] = {1,2,3,4,5,6,7,8,9};
int A,B,C,cnt;

int cal(int a, int b, int c, int d) {
    return (100*a + 10*b + c)*d;
}

int main() {
    scanf("%d%d%d", &A, &B, &C);
    cnt = 0;
    do {
        if (cal(a[0], a[1], a[2], B) == cal(a[3], a[4], a[5], A)
            && cal(a[0], a[1], a[2], C) == cal(a[6], a[7], a[8], A)) {
                printf("%d%d%d %d%d%d %d%d%d\n", a[0], a[1], a[2], a[3],\
                 a[4], a[5], a[6], a[7], a[8]);
            cnt++;
        }
    } while (next_permutation(a, a+9));
    if (cnt == 0) printf("No!!!");
    return 0;
}
