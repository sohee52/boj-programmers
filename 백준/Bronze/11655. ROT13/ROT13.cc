#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	getline(cin, s);
	for (auto a : s) {
		if (a >= 65 && a <= 90) {
			if (a + 13 <= 90) cout << char (a + 13);
			else cout << char (a + 13 - 26);
		} else if (a >= 97 && a <= 122) {
			if (a + 13 <= 122) cout << char (a + 13);
			else cout << char (a + 13 - 26);
		} else cout << a;
	}
}