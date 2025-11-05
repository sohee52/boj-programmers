#include <bits/stdc++.h>
using namespace std;
int n, temp;
deque<int> dq;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    while (dq.size() > 1) {
        dq.pop_front();
        int ft = dq.front();
        dq.pop_front();
        dq.push_back(ft);
    }
    cout << dq.front() << "\n";
}
