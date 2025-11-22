#include <bits/stdc++.h>
using namespace std;
int n, pos;
string p, s, l, r;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	cin >> p;
	pos = p.find('*');
	l = p.substr(0, pos);
	r = p.substr(pos + 1);
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (l.size() + r.size() > s.size()) {
			cout << "NE\n";
		} else {
			if (s.substr(0, l.size()) == l && s.substr(s.size() - r.size()) == r) cout << "DA\n";
			else cout << "NE\n";
		}
	}
}