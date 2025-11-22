#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, cnt;
bool flag;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b;

    // cout << b << "\n";
    while (true) {
        if (b == a) break;
        if (b < a) {
            flag = 1; break;
        }
        if (b % 2 == 0) {
            b = b / 2;
            cnt++;
            // cout << b << "\n";
        } else {
            if (b % 10 == 1) {
                b /= 10;
                cnt++;
                // cout << b << "\n";
            } else {
                flag = 1;
                break;
            }
        }
    }
    // cout << "result\n";
    if (flag) cout << -1 << "\n";
    else cout << cnt + 1 << "\n";
}
