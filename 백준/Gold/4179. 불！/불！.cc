#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, m, jy, jx, y, x, ret;
char a[1004][1004];
int fire[1004][1004], person[1004][1004];
const int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	fill(&fire[0][0],  &fire[0][0] + 1004*1004, INF);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'F') {
				fire[i][j] = 1; q.push({i, j});
			} else if (a[i][j] == 'J') {
				jy = i; jx = j; person[i][j] = 1;
			}
		}
	}
	while (q.size()) {
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if (fire[ny][nx] != INF || a[ny][nx] == '#') continue;
			fire[ny][nx] = fire[y][x] + 1;
			q.push({ny, nx});
		}
	}
	q.push({jy, jx});
	while (q.size()) {
		tie(y, x) = q.front(); q.pop();
		if (y == 0 || y == n-1 || x == 0 || x == m-1) {
			ret = person[y][x];
			break;
		}
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if (person[ny][nx] || a[ny][nx] == '#') continue;
			if (fire[ny][nx] <= person[y][x] + 1) continue;
			person[ny][nx] = person[y][x] + 1;
			q.push({ny, nx});
		}
	}
	if (ret != 0) cout << ret << "\n";
	else cout << "IMPOSSIBLE\n";
}