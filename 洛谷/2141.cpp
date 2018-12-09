#include <iostream>
#include <stdlib.h>

using namespace std;

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int k, count;
    count = 0;
    cin >> k;
    int s[105];
    for (int i = 0; i < k; ++i) {
        cin >> s[i];
    }
    qsort(s, k, sizeof(int), cmp);
    for (int i = k-1; i > 1; --i) {
        int j1, j2;
        int flag = 1;
        for (j1 = i-1; j1 > 0 && flag; --j1) {
            for (j2 = j1-1; j2 >= 0; --j2) {
                if (s[j1] + s[j2] == s[i]) {
                    count++;
                    flag = 0;
                    break;
                } else if (s[j1] + s[j2] < s[i]) {
                    break;
                }
            }
        }
    }
    cout << count;
    return 0;
}

