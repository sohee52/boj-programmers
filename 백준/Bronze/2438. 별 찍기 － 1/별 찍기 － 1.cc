#include <bits/stdc++.h>
using namespace std;
int a;
string go(int i) {
	if (i == 1) return "*";
	else return go(i-1) + "*";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cout << go(i) << "\n";
	}
}
