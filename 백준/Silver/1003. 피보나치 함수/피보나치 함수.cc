#include <bits/stdc++.h>
using namespace std;
int t, k, n, fb[41] = {0, 1, 1};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    for (int i = 3; i < 41; i++) {
        fb[i] = fb[i-1] + fb[i-2];
    }
	cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;
        if (k == 0) cout << 1 << " " << 0 << "\n";
        else if (k == 1) cout << 0 << " " << 1 << "\n";
        else cout << fb[k-1] << " " << fb[k] << "\n";
    }
}
