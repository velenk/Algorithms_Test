#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char a[10000] = { };
    int count = 0;
    char b[1000003] = { };
    int i = -1;
    do {
        i++;
        scanf("%c", &a[i]);
        if (a[i] >= 'A'
            && a[i] <= 'Z') {
            a[i] += 32;
        }
    } while (a[i] != '\n');
    int lentha = i;
    a[lentha] = ' ';
    i = -1;
    do {
        i++;
        scanf("%c", &b[i]);
        if (b[i] >= 'A'
            && b[i] <= 'Z') {
            b[i] += 32;
        }
    } while (b[i] != '\n');
    int lenthb = i;
    b[lenthb] = ' ';
    i = 0;
    int flag0 = 1;
    int s;
    int flags = 1;
    while (i <= lenthb) {
        if (b[i] == a[0] && flags) {
            int flag = 1;
            for (int j = 0; j <= lentha; j++) {
                if (b[i+j] != a[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                count++;
                if (flag0) {
                    s = i;
                    flag0 = 0;
                }
            }
        }
        if (b[i] == ' ') {
            flags = 1;
        } else {
            flags = 0;
        }
        i++;
    }
    if (count) {
        cout << count << " " << s;
    } else {
        cout << -1;
    }
    return 0;
}
