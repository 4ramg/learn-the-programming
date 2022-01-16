#include<stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if((a<b||a==b)&&(a<c||a==c))printf("%d",a);
	else if((a>b||a==b)&&(b<c||a==c))printf("%d",b);
	else printf("%d",c);
  return 0;
}
