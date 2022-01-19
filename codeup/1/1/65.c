#include<stdio.h>
int main() {
   int a, b;
   scanf("%d %d",&b,&a);
   while (b<90){
       b+=5;
       a++;
   }
   printf("%d",a);
   return 0;
}
