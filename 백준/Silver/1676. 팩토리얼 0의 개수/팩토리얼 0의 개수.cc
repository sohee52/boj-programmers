#include <bits/stdc++.h>
using namespace std;
int n, cnt2, cnt5;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    for (int i = 2; i <= n; i *= 2) {
        cnt2 += n / i;
    }
    for (int i = 5; i <= n; i *= 5) {
        cnt5 += n / i;
    }
    cout << min(cnt2, cnt5) << "\n";
    return 0;
}
