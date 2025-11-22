#include <bits/stdc++.h>
using namespace std;
int k, n, a[10004];
typedef long long ll;
bool go(int x) {
	int ret = 0;
	for (int i = 0; i < k; i++) {
		ret += a[i] / x;
	}
	return ret >= n;
}
int bi() {
	ll lo = 1, hi = (1<<31)-1;
	while (lo < hi) {
		ll mid = (lo+hi+1)/2;
		if (go(mid)) lo = mid;
		else hi = mid - 1;
	}
	return lo;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	cout << bi() << "\n";
}