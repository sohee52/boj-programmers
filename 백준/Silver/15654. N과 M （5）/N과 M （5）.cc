#include <bits/stdc++.h>
using namespace std;
int n, m, visited[10004];
vector<int> a, v;

void solve(int depth) {
    if (depth == m) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            visited[i] = 1;
            v.push_back(a[i]);
            solve(depth + 1);
           visited[i] = 0;
            v.pop_back();
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    solve(0);
}
