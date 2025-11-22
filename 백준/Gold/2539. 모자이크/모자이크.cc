#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, k, w;
pair<int, int> a[1004];
bool check(int x) {
	int cnt = 0; ll last = -1e12;
	for (int i = 1; i <= w; i++) {
		if (a[i].second > x) return 0;
		if (a[i].first - last + 1 <= x) continue;
		last = a[i].first; cnt++;
	}
	return cnt <= k;
}
int bi() {
	int lo = 1, hi = 1e6;
	while (lo < hi) {
		int mid = (lo+hi)/2;
		if (check(mid)) hi = mid;
		else lo = mid + 1;
	}
	return lo;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> k >> w;
	for (int i = 1; i <= w; i++) {
		cin >> a[i].second >> a[i].first;
	}
	sort(a+1, a+w+1);
	cout << bi() << "\n";
}