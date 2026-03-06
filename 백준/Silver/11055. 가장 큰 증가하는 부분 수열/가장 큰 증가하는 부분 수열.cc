#include <bits/stdc++.h>
using namespace std;
int n, a[1004], ans, dp[1004];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        ans = max(ans, dp[i]);
    }

    cout << ans << "\n";
}