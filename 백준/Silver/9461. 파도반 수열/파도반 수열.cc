#include <bits/stdc++.h>
using namespace std;
int t, n;
long long a[101] = {0, 1, 1, 1, 2};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    for (int i = 5; i <= 100; i++) {
        a[i] = a[i-3] + a[i-2];
    }

    cin >> t;
    while(t--) {
        cin >> n;
        cout << a[n] << "\n";
    }
}
