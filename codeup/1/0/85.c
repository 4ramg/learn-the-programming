#include <stdio.h>
int main(){
    int h, b, c, s;
    double result = 0;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    result = (h * b * c * (double)s)/1024/1024/8;
    printf("%.1lf MB", result);
}
