#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll dp[1004];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 0;
    dp[4] = 1;
    dp[5] = 0;
    dp[6] = 1;

    if (n % 2 == 1) cout << "SK" << "\n";
    else cout << "CY" << "\n";
}