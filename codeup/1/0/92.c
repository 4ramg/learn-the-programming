#include<stdio.h>
int main() {
    int a, b, c, k=1;
    scanf("%d %d %d", &a,&b,&c);
    while(k%a!=0||k%b!=0||k%c!=0)k++;
    printf("%d",k);
}
