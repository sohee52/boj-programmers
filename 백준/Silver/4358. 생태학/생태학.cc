#include <bits/stdc++.h>
using namespace std;
int total;
string s;
map<string, int> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	while(getline(cin, s)) {
        mp[s]++; total++;
    }

    cout << fixed << setprecision(4);

    for (auto &p : mp) {
        double ans = (double) p.second / total * 100;
        cout << p.first << " " << ans << "\n";
    }
}
