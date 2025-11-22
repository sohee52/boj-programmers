#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 200000;
int n, c, a[MAX+4];
bool check(int x) {
	ll cnt = 0, last = -1e12;
	for (int i = 0; i < n; i++) {
		if (a[i] - last < x) continue;
		last = a[i]; cnt++;
	}
	return cnt >= c;
}
ll bi() {
	ll lo = 1, hi = a[n-1]-a[0];
	while (lo < hi) {
		ll mid = (lo+hi+1)/2;
		if (check(mid)) lo = mid;
		else hi = mid - 1;
	}
	return lo;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	cout << bi() << "\n";
}