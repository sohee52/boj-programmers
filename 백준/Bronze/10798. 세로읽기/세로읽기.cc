#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v(15);
string s, ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	for (int i = 0; i < 5; i++) {
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            v[j].push_back(s[j]);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            ans += v[i][j];
        }
    }

    cout << ans << "\n";
}