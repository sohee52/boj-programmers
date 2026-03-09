#include <bits/stdc++.h>
using namespace std;
int a[14], cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	for (int i = 0; i < 10; i++) {
        cin >> a[i];
        a[i] %= 42;
        bool flag = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) flag = 0;
        }
        if (flag) cnt++;
    }
    cout << cnt << "\n";
}