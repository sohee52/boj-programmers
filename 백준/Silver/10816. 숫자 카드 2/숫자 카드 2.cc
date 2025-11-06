#include <bits/stdc++.h>
using namespace std;
int n, m, temp, a[10000004], b[10000004];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp >= 0) {
			if (a[temp] == 0) a[temp] = 1;
			else a[temp]++;
		} else {
			temp = -temp;
			if (b[temp] == 0) b[temp] = 1;
			else b[temp]++;
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (temp >= 0) cout << a[temp] << " ";
		else {
			temp = -temp;
			cout << b[temp] << " ";
		}
	}
	cout << "\n";
	return 0;
}
