#include <iostream>
#include <queue>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int n, a[54], mx, k, cnt;

int main() {
    cin >> n;
    if (n == 1) {
        cout << 0 << "\n";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (true) {
        mx = -1; k = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] > mx) {
                mx = a[i]; k = i;
            }
        }
        if (a[0] > mx) break;
        a[0]++; a[k]--; cnt++;
    }
    cout << cnt << "\n";
}