#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--) {
        string s;
        getline(cin >> ws, s);

        vector<int> cnt(26, 0);
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                cnt[c - 'a']++;
            }
        }

        int mx = *max_element(cnt.begin(), cnt.end());

        int tie = 0, idx = -1;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] == mx) {
                tie++;
                idx = i;
            }
        }

        if (tie >= 2) cout << "?\n";
        else cout << char(idx + 'a') << "\n";
    }
}