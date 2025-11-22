#include <bits/stdc++.h>
using namespace std;
string s;
int alp[26];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	for (char c : s) {
		alp[c - 'a']++;
	}
	for (int i : alp) {
		cout << i << " ";
	}
}