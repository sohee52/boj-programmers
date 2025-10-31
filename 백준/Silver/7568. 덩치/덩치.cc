#include <bits/stdc++.h>
using namespace std;
int n, p, q;
vector<pair<int, int>> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    v.resize(n); // 입력 개수만큼 벡터 크기 설정
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if ((v[j].first > v[i].first) && (v[j].second > v[i].second)) rank++;
        }
        cout << rank << " ";
    }
    cout << "\n";
    return 0;
}
