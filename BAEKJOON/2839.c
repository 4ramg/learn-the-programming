#include <stdio.h>

int main(void) {
	int k, n = 0;
	scanf("%d", &k);
	for (; k % 5 != 0; n++) {
		if (k < 0) {
			n = -1;
			printf("-1");
			return 0;
		}
		k -= 3; 
	}
	printf("%d", n + k / 5);
}
