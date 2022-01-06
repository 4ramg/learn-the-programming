#include<stdio.h>
int main(){
    int a;
    i:
    scanf("%d",&a);
    if(a!=0) {
        printf("%d\n",a);
        goto i;
    }
}
