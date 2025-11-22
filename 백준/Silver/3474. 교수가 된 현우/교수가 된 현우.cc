#include <bits/stdc++.h>
using namespace std;
int t, a;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) {
		cin >> a;
		int cnt2 = 0, cnt5 = 0;
		for (int i = 2; i <= a; i *= 2) {
			cnt2 += a / i;
		}
		for (int i = 5; i <= a; i *= 5) {
			cnt5 += a / i;
		}
		cout << min(cnt2, cnt5) << "\n";
	}
}