#include <cstdio>

char a[100];
int n,cnt;

int main() {
    scanf("%d",&n);
    scanf("%s",a);
    
    for (int i= 0;a[i]!='\0';i++ ) {
        printf("%c",(a[i]-'a'+n)%26+'a');
    }
    
    return 0;
}
