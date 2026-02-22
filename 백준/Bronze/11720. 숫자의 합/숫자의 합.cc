#include <bits/stdc++.h>
using namespace std;
int n, ans;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        ans += s[i] - '0';
    }
    cout << ans << "\n";
}