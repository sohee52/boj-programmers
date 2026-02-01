#include <string>
#include <vector>
const int MAX = 104;
using namespace std;
vector<int> adj[MAX];
bool visited[MAX];
int cnt;

void go(int cur, int u, int v) {
    visited[cur] = 1;
    cnt++;
    
    for (int nxt : adj[cur]) {
        if ((cur == u && nxt == v) || (cur == v && nxt == u)) continue;
        if (visited[nxt]) continue;
        go(nxt, u, v);
    }
}

int solution(int n, vector<vector<int>> wires) {
    int answer = MAX;
    for (int i = 0; i < MAX; i++) {
        adj[i].clear();
    }
    
    for (auto w : wires) {
        adj[w[0]].push_back(w[1]);
        adj[w[1]].push_back(w[0]);
    }
    
    for (auto w : wires) {
        cnt = 0; fill(visited, visited + MAX, 0);
        go(1, w[0], w[1]);
        int size1 = cnt;
        int size2 = n - size1;
        answer = min(answer, abs(size1 - size2));
    }
    
    return answer;
}