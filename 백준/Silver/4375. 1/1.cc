#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
int main() {
	while(scanf("%d", &n) != EOF) {
		m = 1; cnt = 1;
		while((m % n) != 0) {
			m = m % n;
			m = 10 * m + 1;
			cnt++;
		}
		printf("%d\n", cnt);
	}
}