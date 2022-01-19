#include<stdio.h>
int main() {
	int a,b,c,k;
	scanf("%d %d %d", &a,&b,&c);
	if (a > b) {
		k = b;
		b = a;
		a = k;
	}
	if (b > c) {
		k = c;
		c = b;
		b = k;
	}
	if (a > b) {
		k = b;
		b = a;
		a = k;
	}
	printf("%d %d %d", a, b, c);
  return 0;
}
