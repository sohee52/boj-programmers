#include <bits/stdc++.h>
using namespace std;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int n, m, a[104][104], visited[104][104], ny, nx, cnt, cnt2, flag;
vector<pair<int, int>> v;
void dfs(int y, int x) {
	visited[y][x] = 1;
	if (a[ny][nx] == 1) {
		v.push_back({y, x});
		return;
	}
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	while(true) {
		fill(&visited[0][0], &visited[0][0] + 104*104, 0);
		v.clear();
		dfs(0, 0);
		cnt2 = v.size();
		for (pair<int, int> b : v) {
			a[b.first][b.second] = 0;
		}
		cnt++; flag = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] != 0) flag = 1;
			}
		}
		if (flag == 0) break;
	}
	cout << cnt << "\n" << cnt2 << "\n";
}