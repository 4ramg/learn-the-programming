#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%2d %4d %d", &a,&b,&c);
	if (c<=2) printf("%d", 113-a);
	else printf("%d",13-a);
  return 0;
}
