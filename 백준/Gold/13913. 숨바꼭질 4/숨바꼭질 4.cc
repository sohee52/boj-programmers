#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
const int max_n = 200004;
int n, k, visited[max_n], prev[max_n];
vector<int> v;
queue<int> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	visited[n] = 1;
	q.push(n);
	while(q.size()) {
		int now = q.front(); q.pop();
		if (now == k) break;
		for (int next : {now+1, now-1, now*2}) {
			if (next >= 0 && next < max_n && !visited[next]) {
				q.push(next);
				visited[next] = visited[now] + 1;
				prev[next] = now;
			}
		}
	}
	cout << visited[k] - 1 << "\n";
	for (int i = k; i != n; i = prev[i]) {
		v.push_back(i);
	}
	v.push_back(n);
	reverse(v.begin(), v.end());
	for (int i : v) cout << i << " ";
}