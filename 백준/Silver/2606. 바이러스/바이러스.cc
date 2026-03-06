#include <bits/stdc++.h>
using namespace std;
int n, k, a, b, cnt;
vector<int> adj[104];
queue<int> q;
bool visited[104];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    q.push(1);
    visited[1] = 1;
    while (q.size()) {
        int x = q.front(); q.pop();
        for (int nx : adj[x]) {
            if (visited[nx]) continue;
            visited[nx] = 1;
            q.push(nx);
            cnt++;
        }
    }

    cout << cnt << "\n";
}