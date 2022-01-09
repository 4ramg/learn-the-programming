#include<stdio.h>
int main() {
    int n, i, a, b = 1000;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a < b) b = a;
    }
    printf("%d", b);
}
