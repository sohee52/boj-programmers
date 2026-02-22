#include <bits/stdc++.h>
using namespace std;
int change(string s) {
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 5));
    int ss = stoi(s.substr(6, 8));
    return h * 3600 + m * 60 + ss;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
    cin >> s;
    int cur = change(s);

    cin >> s;
    int target = change(s);

    int ans = target - cur;
    if (ans <= 0) ans += 24 * 3600;

    int h = ans / 3600;
    int m = (ans % 3600) / 60;
    int ss = ans % 60;

    cout << setfill('0');
    cout << setw(2) << h << ":"
        << setw(2) << m << ":"
        << setw(2) << ss << "\n";
}