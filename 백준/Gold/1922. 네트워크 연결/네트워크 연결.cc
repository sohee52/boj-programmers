#include <bits/stdc++.h>
using namespace std;
int t, n, m, visited[100004], u, v, w, cost;
vector<pair<int, int>> graph[100004]; // {목적지 정점, 가중치}

void prim() {
    vector<pair<int, int>> mcst; // {시작 정점, 끝 정점}
    vector<int> U; // 현재 방문된 정점 집합
    priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq; // 최소 heap 우선순위 큐, {가중치, {시작 정점, 끝 정점}}

    fill(visited, visited + 100004, 0);

    u = 1; // 정점 1을 시작 정점으로 선택
    U.push_back(u); // U 집합에 추가하고
    visited[u] = 1; // 방문 표시
    for (int i = 0; i < graph[u].size(); i++) {
        v = graph[u][i].first; // 정점 1에서 연결된 모든 간선을 우선순위 큐에 추가
        pq.push({graph[u][i].second, {u, v}}); // {가중치, {1, v}}
    }

    while (U.size() < n) { // MST에 n개의 정점이 모두 포함될 때까지 반복
        // 가중치가 가장 작은 간선을 꺼냄
        auto [u, v] = pq.top().second; // u: 이미 MST에 포함된 정점, v: MST에 새로 추가할 후보 정점
        w = pq.top().first;
        pq.pop();

        if (visited[v] == 1) continue; // cycle이 생기지 않도록 v가 이미 MST에 포함되어 있다면 스킵

        mcst.push_back({u, v}); // 간선 (u, v)를 MST에 추가
        cost += w;
        U.push_back(v); // 정점 v를 U 집합에 추가하고 
        visited[v] = 1; // 방문 표시

        for (int i = 0; i < graph[v].size(); i++) { // 새로 추가된 정점 v에서 연결된 모든 간선을 탐색
            auto [u, w] = graph[v][i]; // u: v와 연결된 정점, w: 간선의 가중치
            if (visited[u]) continue; // 정점 u가 이미 MST에 포함되어 있으면 스킵
            pq.push({w, {v, u}});  // {w, {v, u}}: 가중치 w, 간선 v→u
        }
    }

    cout << cost << "\n";
}
int main() {
	cin >> n >> m;
    for (int j = 1; j <= n; j++) {
        graph[j].clear();
    }
    for (int i = 1; i <= m; i++) {
        cin >> u >> v >> w;
        // 무방향 그래프이므로 양방향으로 간선 추가
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    prim();
}
