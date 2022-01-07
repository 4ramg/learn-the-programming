#include<stdio.h>
int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a,&b, &c);
    for ( ; c != 1; c--) {
        a *= b;
    }
    printf("%lld",a);
}
