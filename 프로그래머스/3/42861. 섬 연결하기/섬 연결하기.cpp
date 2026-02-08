#include <bits/stdc++.h>
using namespace std;
int a[104];

bool cmp(vector<int> a, vector<int> b) {
    return a[2] < b[2];
}

int go(int cur) {
    if (a[cur] == cur) return cur;
    return a[cur] = go(a[cur]);
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    for (int i = 0; i < n; i++) a[i] = i;
    sort(costs.begin(), costs.end(), cmp);
    
    for(int i = 0; i < costs.size(); i++) {
        int start = go(costs[i][0]);
        int end = go(costs[i][1]);
        int cost = costs[i][2];
        
        if (start != end) {
            answer += cost;
            a[end] = start;
        }
        
    }
    
    return answer;
}