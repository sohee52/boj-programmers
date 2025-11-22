#include <bits/stdc++.h>
using namespace std;
int n, m, j, k, ret, l = 1, r;
void go(int k) {
	r = l + m - 1;
	if (k < l) {
		ret += l - k;
		l = k;
		r = l + m - 1;
	}
	else if (k > r) {
		ret += k - r;
		r = k;
		l = k - m + 1;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	cin >> j;
	while (j--) {
		cin >> k;
		go(k);
	}
	cout << ret << "\n";
}