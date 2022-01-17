#include<stdio.h>
int main() {
   float a;
    scanf("%f", &a);
    if ((a<=40&&a>=30)||(a<=70&&a>=60)) printf("win");
    else printf("lose");
    return 0;
}
