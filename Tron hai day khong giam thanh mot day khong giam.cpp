#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int m;
	scanf("%d", &m);
	int b[m];
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	int c1 = 0, c2 = 0;
	while(c1 < n || c2 < m) {
		if (a[c1] >= b[c2] && c2 < m) {
			printf("%d ", b[c2]);
			c2++;
		}
		if (b[c2] >= a[c1] && c1 < n) {
			printf("%d ", a[c1]);
			c1++;
		}
		if (c2 == m) while(c1 < n) {
			printf("%d ", a[c1]);
			c1++;
		}
		if (c1 == n) while(c2 < m) {
			printf("%d ", b[c2]);
			c2++;
		}
	}
}
