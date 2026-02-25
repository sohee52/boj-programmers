#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string text, target, s = "";
    cin >> text >> target;
    for (int i = 0; i < text.size(); i++) {
        if (isdigit(text[i])) continue;
        else s += text[i];
    }
    if (s.find(target) != string::npos) cout << 1 << "\n";
    else cout << 0 << "\n";
}