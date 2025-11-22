#include <bits/stdc++.h>
using namespace std;
int n, visited[10];
char a[10];
vector<string> ret;
bool check(char a, int b, int c) {
	if (a == '<') return b < c;
	if (a == '>') return b > c;
	return false;
}
void go(int idx, string s) {
	if (idx == n + 1) {
		ret.push_back(s); return;
	}
	for (int i = 0; i <= 9; i++) {
		if (visited[i]) continue;
		if (idx == 0 || check(a[idx-1], s[idx-1]-'0', i)) {
			visited[i] = 1;
			go(idx+1, s + to_string(i));
			visited[i] = 0;
		}
	}
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	go(0, "");
	sort(ret.begin(), ret.end());
	cout << ret.back() << "\n" << ret.front() << "\n";
}