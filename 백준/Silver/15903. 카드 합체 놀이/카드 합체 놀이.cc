#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, temp;
ll a, b, sum;
priority_queue<ll, vector<ll>, greater<ll>> pq;
int main() {
	cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        pq.push(temp);
    }
    while (m--) {
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        pq.push(a+b); pq.push(a+b);
    }
    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    cout << sum << "\n";
}
