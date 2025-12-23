#include <bits/stdc++.h>
using namespace std;
const int MAX = 1004;
const int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
int n, m, a[MAX][MAX], visited[MAX][MAX], sy, sx, y, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) {
                sy = i, sx = j;
            }
        }
    }
    
    queue<pair<int, int>> q;
    visited[sy][sx] = 1;
    q.push({sy, sx});
    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (a[ny][nx] != 1 || visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j] != 1) cout << 0 << " ";
            else {
                if (visited[i][j] - 1 <= 0) cout << -1 << " ";
                else cout << visited[i][j] - 1 << " ";
            }
        }
        cout << "\n";
    }
}
