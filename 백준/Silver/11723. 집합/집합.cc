#include <bits/stdc++.h>
using namespace std;
int n, temp;
string s;
map<int, int> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    while (n--) {
        cin >> s;
        if (s == "add") {
            cin >> temp;
            if (mp[temp] == 0) mp[temp] = 1;
        } else if (s == "remove") {
            cin >> temp;
            if (mp[temp]) mp[temp] = 0;
        } else if (s == "check") {
            cin >> temp;
            if (mp[temp]) cout << 1 << "\n";
            else cout << 0 << "\n";            
        } else if (s == "toggle") {
            cin >> temp;
            if (mp[temp]) mp[temp] = 0;
            else mp[temp] = 1;
        } else if (s == "all") {
            for (int i = 1; i <= 20; i++) {
                mp[i] = 1;
            }
        } else if (s == "empty") {
            for (int i = 1; i <= 20; i++) {
                mp.clear();
            }
        }
    }
}
