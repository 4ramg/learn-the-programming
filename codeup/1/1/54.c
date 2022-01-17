#include<stdio.h>
int main() {
   int a, b;
    scanf("%d %d", &a, &b);
    a -= b;
    if (a < 0) a *= -1;
    printf("%d", a);
    return 0;
}
