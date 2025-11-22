#include <bits/stdc++.h>
using namespace std;
int n, p, l, r;
char x, y, z;
struct child {
	int l, r;
};
vector<child> a(30);
queue<int> q;

void pre(int now) {
    if (now == -1) return;
    cout << (char)(now + 'A');
    pre(a[now].l);
    pre(a[now].r);
}

void in(int now) {
	if (now == -1) return;
	in(a[now].l);
	cout << (char)(now + 'A');
	in(a[now].r);
}

void pst(int now) {
	if (now == -1) return;
	pst(a[now].l);
	pst(a[now].r);
	cout << (char)(now + 'A');
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;

		p = x - 'A';

		if (y == '.') l = -1;
		else l = y - 'A';

		if (z == '.') r = -1;
		else r = z - 'A';

		a[p] = {l, r};
	}

	pre(0);
	cout << "\n";
	in(0);
	cout << "\n";
	pst(0);
}
