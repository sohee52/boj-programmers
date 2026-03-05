#include <bits/stdc++.h>
using namespace std;
int n, a[100004], psum[100004];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        psum[1] = a[1];
        if (i >= 2) psum[i] = max(a[i], psum[i-1] + a[i]);
    }
    int mx = -1004;
    for (int i = 1; i <= n; i++){
        mx = max(psum[i], mx);
    }
    cout << mx << "\n";
}