#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b) {
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 1; int idx = 0;
    
    sort(routes.begin(), routes.end(), cmp);
    
    for (int i = 1; i < routes.size(); i++) {
        // cout << "routes[i-1][1]: " << routes[i-1][1] << "\n";
        // cout << "routes[i][0]: " << routes[i][0] << "\n";
        if(routes[idx][1] < routes[i][0]) {
            idx = i; answer++;
        }
        // cout << "answer: " << answer << "\n";
    }
    
    return answer;
}