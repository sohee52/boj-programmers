#include <bits/stdc++.h>
using namespace std;
int a[500][500], visited[500][500], n, m;
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

int dfs(int x, int y) {
    if (x == n - 1 and y == m - 1) return 1;
    if (visited[x][y] == -1) {
        visited[x][y] = 0;
        for (int i = 0; i < 4; i++) {
            int nx= dx[i] + x;
            int ny = dy[i] + y;
            if (nx >= 0 and nx < n and ny >= 0 and ny < m) {
                if (a[nx][ny] < a[x][y])
                    visited[x][y] += dfs(nx, ny);
            }
        }
    }
    return visited[x][y];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            visited[i][j] = -1;
        }
    }
    
    cout << dfs(0,0) << "\n";
    return 0;
}