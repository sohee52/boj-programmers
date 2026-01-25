#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
vector<int> nums;
vector<char> ops;
int dpMax[104][104], dpMin[104][104];
int solution(vector<string> arr) {
    nums.clear(); ops.clear();
    
    for (string &x : arr) {
        if (x == "-" || x == "+") {
            ops.push_back(x[0]);
        } else {
            nums.push_back(stoi(x));
        }
    }
        
    fill(&dpMax[0][0], &dpMax[0][0] + 104*104, -INF);
    fill(&dpMin[0][0], &dpMin[0][0] + 104*104, INF);
    
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        dpMax[i][i] = nums[i];
        dpMin[i][i] = nums[i];
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            for (int k = i; k < j; k++) {
                if (ops[k] == '+') {
                    dpMax[i][j] = max(dpMax[i][j], dpMax[i][k] + dpMax[k+1][j]);
                    dpMin[i][j] = min(dpMin[i][j], dpMin[i][k] + dpMin[k+1][j]);
                } else {
                    dpMax[i][j] = max(dpMax[i][j], dpMax[i][k] - dpMin[k+1][j]);
                    dpMin[i][j] = min(dpMin[i][j], dpMin[i][k] - dpMax[k+1][j]);
                }
            }
        }
    }
    
    return dpMax[0][n-1];
}