#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, mp, mf, ms, mv, q, r, x, y, z, ret = INF;
struct A{
	int p, f, s, v, c;
}a[16];
map<int, vector<vector<int>>> ret_v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	cin >> mp >> mf >> ms >> mv;
	for (int i = 0; i < n; i++) {
		cin >> a[i].p >> a[i].f >> a[i].s >> a[i].v >> a[i].c;
	}
	for (int i = 1; i <= (1<<n)-1; i++) {
		q = r = x = y = z = 0;
		vector<int> v;
		for (int j = 0; j < n; j++) {
			if (i & (1<<j)) {
				v.push_back(j+1);
				q += a[j].p;
				r += a[j].f;
				x += a[j].s;
				y += a[j].v;
				z += a[j].c;
			}
		}
		if (q >= mp && r >= mf && x >= ms && y >= mv) {
			if (ret >= z) {
				ret = z;
				ret_v[ret].push_back(v);
			}
		}
	}
	if (ret == INF) cout << -1 << "\n";
	else {
		sort(ret_v[ret].begin(), ret_v[ret].end());
		cout << ret << "\n";
		for (int a : ret_v[ret][0]) {
			cout << a << " ";
		}
	}
}