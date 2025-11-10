#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[10]; // 현재까지 선택한 숫자들을 담는 배열

// idx: 현재 채울 자리(0..m-1), start: 이번 자리에서 시작할 숫자
void go(int idx, int start) {
    if (idx == m) { // m개를 모두 채운 경우(완성된 한 조합)
        for (int i = 0; i < m; i++)
            cout << a[i] << " ";
        cout << "\n";
        return; // 이 분기 종료(백트래킹 복귀)
    }
    for (int i = start; i <= n; i++) { // 이번 자리(idx)에 올 수 있는 후보들을 순회
        a[idx] = i; // 현재 자리(idx)에 i를 배치
        go(idx + 1, i + 1); // 다음 자리로 진행. 다음은 반드시 i+1부터(오름차순·중복방지)
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    go(0, 1); // 0번째 자리부터 시작, 후보 시작값은 1
}
