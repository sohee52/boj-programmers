#include <bits/stdc++.h>
using namespace std;
const int MAX = 104;
int win[MAX][MAX];

int solution(int n, vector<vector<int>> results) {
    
    for (auto ret : results) {
        win[ret[0]][ret[1]] = 1;
        win[ret[1]][ret[0]] = -1;
    }
    
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (!win[i][k] || !win[k][j]) continue;
                if (win[i][k] == 1 && win[k][j] == 1) {
                    win[i][j] = 1; win[j][i] = -1;
                }
            }
        }
    }
    
    int answer = 0;    
    for (int i = 1; i <= n; i++) {
        int known = 0;
        for (int j = 1; j <= n; j++) {
            if (win[i][j] != 0) known++;
        }
        if (known == n-1) answer++;
    }

    return answer;
}