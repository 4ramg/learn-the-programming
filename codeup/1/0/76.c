#include<stdio.h>
int main(){
    int a,b='a';
    scanf("%c",&a);
    while(a!=b) {
        printf("%c ",b++);
    }
    printf("%c ",b);
}
