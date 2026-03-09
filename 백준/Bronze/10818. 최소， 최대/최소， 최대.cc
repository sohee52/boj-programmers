#include <bits/stdc++.h>
using namespace std;
int n, a, mn = 1e9, mx = -1e9;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mn = min(a, mn);
        mx = max(a, mx);
    }
    cout << mn << " " << mx << "\n";
}