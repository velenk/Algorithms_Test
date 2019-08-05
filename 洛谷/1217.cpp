#include <cstdio>
#include <cmath>

int a,b;
int cnt;

inline int isPrime(int n) {
    if (n<2) return 0;
    int t = (int)sqrt(n);
    for (int i = 2; i <=t; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    
    scanf("%d%d",&a,&b);
    int temp;
    for (int i=2;i<=9;i++) {
        temp = i;
        if (temp >= a && temp <= b && isPrime(temp) ) {
            printf("%d\n", temp);
        }
        if (temp >= b){
            break;
        }
    }
    
    for (int i=1;i<=9;i++) {
        temp = i*11;
        if (temp >= a && temp <= b && isPrime(temp) ) {
            printf("%d\n", temp);
        }
        if (temp >= b){
            break;
        }
    }
    
    for (int i1=1;i1<=9;i1++)
    for (int i2=0;i2<=9;i2++) {
        temp = i1*101 + i2*10;
        if (temp >= a && temp <= b && isPrime(temp) ) {
            printf("%d\n", temp);
        }
        if (temp >= b){
            break;
        }
    }
    
    
    for (int i1=1;i1<=9;i1++)
    for (int i2=0;i2<=9;i2++)
    for (int i3=0;i3<=9;i3++) {
        temp = i1*10001 + i2*1010 + i3*100;
        if (temp >= a && temp <= b && isPrime(temp) ) {
            printf("%d\n", temp);
        }
        if (temp >= b){
            break;
        }
    }
    
    
    for (int i1=1;i1<=9;i1++)
    for (int i2=0;i2<=9;i2++)
    for (int i3=0;i3<=9;i3++)
    for (int i4=0;i4<=9;i4++) {
        temp = i1*1000001 + i2*100010 + i3*10100 + i4*1000;
        if (temp >= a && temp <= b && isPrime(temp) ) {
            printf("%d\n", temp);
        }
        if (temp >= b){
            break;
        }
    }
    
    
    for (int i1=1;i1<=9;i1++)
    for (int i2=0;i2<=9;i2++)
    for (int i3=0;i3<=9;i3++)
    for (int i4=0;i4<=9;i4++)
    for (int i5=0;i5<=9;i5++) {
        temp = i1*100000001 + i2*10000010 + i3*1000100 + i4*101000 + i5*10000;
        if (temp >= a && temp <= b && isPrime(temp) ) {
            printf("%d\n", temp);
        }
        if (temp >= b){
            break;
        }
    }
    
    
    return 0;
}
