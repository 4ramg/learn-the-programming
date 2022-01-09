#include<stdio.h>
int main() {
    long long int a, b,k, c;
    scanf("%lld %lld %lld %lld", &a,&b,&k, &c);
    for ( ; c != 1; c--) {
        a *= b;
        a += k;
    }
    printf("%lld",a);
}
