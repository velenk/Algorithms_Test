#include <cstdio>

char a[100];
char b[100];
int n,cnt;

int ansa,ansb;

int main() {
    scanf("%s",a);
    scanf("%s",b);
    
    ansa = ansb = 1;
    
    for (int i= 0;a[i]!='\0';i++ ) {
        ansa *= a[i]-'A'+1;
        ansa = ansa%47;
    }
    
    for (int i= 0;b[i]!='\0';i++ ) {
        ansb *= b[i]-'A'+1;
        ansb = ansb%47;
    }
    
    if (ansa == ansb) {
        printf("GO\n");
    } else {
        printf("STAY\n");
    }
    
    return 0;
}
