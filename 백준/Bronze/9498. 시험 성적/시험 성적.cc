#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	if (n >= 90 && n <= 100) cout << "A\n";
	else if (n >= 80) cout << "B\n";
	else if (n >= 70) cout << "C\n";
	else if (n >= 60) cout << "D\n";
	else cout << "F\n";
}
