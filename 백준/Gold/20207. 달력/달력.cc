#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int n, s, e, level[370], f, l, garo, sero, ans;
bool block, flag;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        for (int j = s; j <= e; j++) {
            level[j]++;
        }
    }
    for (int i = 1; i <= 365; i++) {
        if (level[i] == 0) {
            if (block) {
                garo = l - f + 1;
                ans += (garo * sero);
                garo = 0; sero = 0; block = 0;
            }
            continue;
        } else {
            if (!block) f = i;
            sero = max(sero, level[i]);
            l = i; block = 1;
        }    
    }

    if (block) {
        garo = l - f + 1;
        ans += (garo * sero);
    }

    cout << ans << "\n";
}