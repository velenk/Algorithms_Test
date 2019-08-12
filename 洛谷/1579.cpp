#include <cstdio>
#include <cmath>

int x, y, z, n;

int isPrime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a%i == 0) return 0;
    }
    return 1;
}

int main(){
    scanf("%d", &n);
    if (isPrime(n-4)) {
        printf("2 2 %d\n", n-4);
    } else {
        for (x=2; x<sqrt(n); x++) {
            if (!isPrime(x)) continue;
            for (y=x; y<sqrt(n); y++){
                z = n-x-y;
                if (y > z) break;
                if (!isPrime(y)) continue;
                if (isPrime(z)) {
                    printf("%d %d %d", x, y, z);
                    return 0;
                }
            }
        }
    }
    return 0;
}
