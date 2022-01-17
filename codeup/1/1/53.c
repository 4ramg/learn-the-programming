#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    if(a>b)printf(">");
    if(a<b)printf("<");
    if(a==b)printf("=");
    return 0;
}
