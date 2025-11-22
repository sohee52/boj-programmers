#include <bits/stdc++.h>
using namespace std;
const int MAX = 10004;
int n, m, temp, visited[MAX];
vector<int> a, v;
set<vector<int>> s;
void go(int depth) {
    if (depth == m) {
        s.insert(v);
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            visited[i] = 1;
            v.push_back(a[i]);
            go(depth + 1);
            visited[i] = 0;
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
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    go(0);
    for (vector<int> w : s) {
        for (int it : w) {
            cout << it << " ";
        }
        cout << "\n";
    }

}
