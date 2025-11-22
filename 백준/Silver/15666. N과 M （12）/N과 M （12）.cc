#include <bits/stdc++.h>
using namespace std;
const int MAX = 10004;
int n, m, temp;
vector<int> a, v, preV;
set<int> st;
bool cmp (vector<int> x, vector<int> y) {
    for (int i = 1; i < m; i++) {
        if (y[i] < y[i-1]) return false;
    }
    for (int i = 0; i < m; i++) {
        if (x[i] < y[i]) return true;
        else if (x[i] == y[i]) {
            continue;
        } else if (x[i] > y[i]) return false;
    }
    return false;
}
void go(int depth) {
    if (depth == m) {
        if (preV.empty()) {
            for (int it : v) {
                cout << it << " ";
            }
            cout << "\n";
            preV = v;
        }
        else if (preV.size() && cmp(preV, v)) {
            for (int it : v) {
                cout << it << " ";
            }
            cout << "\n";
            preV = v;
        }
    } else {
        for (int i = 0; i < a.size(); i++) {
            v.push_back(a[i]);
            go(depth + 1);
            v.pop_back();
        }
    }
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        st.insert(temp);
    }
    for (int it : st) {
        a.push_back(it);
    }
    go(0);
}
