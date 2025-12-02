#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, v, a, b, visited[1004];
vector<int> adj[1004];
void dfs(int s) {
    visited[s] = 1;
    cout << s << " ";
    for (int u : adj[s]) {
        if(visited[u]) continue;
        visited[u] = 1;
        dfs(u);
    }
}

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    cout << s << " ";
    while(q.size()) {
        int u = q.front(); q.pop();
        for (int it: adj[u]) {
            if (visited[it]) continue;
            visited[it] = 1;
            q.push(it);
            cout << it << " ";
        }
    }
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end());

    dfs(v);
    cout << "\n";

    fill(visited, visited+1004, 0);
    
    bfs(v);
}
