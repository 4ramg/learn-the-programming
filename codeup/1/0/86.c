#include <stdio.h>
int main(){
    int h, b, c;
    double result = 0;
    scanf("%d %d %d %d", &h, &b, &c);
    result = (h * b * (double)c)/1024/1024/8;
    printf("%.2lf MB", result);
}
