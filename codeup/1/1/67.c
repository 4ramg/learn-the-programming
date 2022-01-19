#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if (a > b && a < c|| a < b && a > c) printf("%d", a);
	else if (a == b || b == c|| c > b && a < b|| c < b && a > b) printf("%d",b);
	else  printf("%d", c);
  return 0;
}
