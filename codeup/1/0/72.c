#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    i:
    scanf("%d",&b);
    printf("%d\n",b);
    if(a--!=1) goto i;
}
