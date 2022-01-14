#include<stdio.h>

int main() {
	float a, b,c,d;
	for(d=0;d<3;d++){
        scanf("%f %f", &a, &b);
        c+=a*b;
	}
	printf("%.1f",c);
  return 0;
}
