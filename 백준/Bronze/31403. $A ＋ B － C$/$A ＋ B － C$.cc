#include <bits/stdc++.h>
using namespace std;
int a, b, c;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> a >> b >> c;
    cout << a + b - c << "\n";
    s = to_string(a);
    s += to_string(b);
    cout << stoi(s) - c << "\n";
}