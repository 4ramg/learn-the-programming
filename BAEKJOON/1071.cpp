#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int c = 0;
	scanf("%d", &n);
	int m[50];
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}
	sort(m, m + n);
	for (int i = 0; i < n-1; i++) {
		int a = m[i], b = m[i + 1];
		if (a + 1 == b) {
			if (i == n - 2 || m[i+1]>m[i+2]||c==1) {
				int key = m[i];
				m[i] = m[i + 1];
				m[i + 1] = key;
				c = 0;
			} else {
				int t = m[i + 1];
				int key = i + 2;
				if (t == m[key]) {
					while (t == m[key]) {
						key++;
						if (key == n) {
							c = 1;
						}
					}
				}
				if (c != 1) {
					m[i + 1] = m[key];
					m[key] = t;
				}
			}
			i = i - 2;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", m[i]);
	}
}
