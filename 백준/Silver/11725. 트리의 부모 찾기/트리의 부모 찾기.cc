#include <bits/stdc++.h>
using namespace std;
const int MAX = 100004;
int n, a, b, x[MAX], visited[MAX];
vector<int> adj[MAX];
void go(int s) {
    visited[s] = 1;
    for (int it : adj[s]) {
        if (visited[it]) continue;
        x[it] = s;
        go(it);
    }
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    go(1);
    for (int i = 2; i <= n; i++) cout << x[i] << "\n";
}
