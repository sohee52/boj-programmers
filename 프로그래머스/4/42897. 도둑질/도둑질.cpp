#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 4;
int dp[MAX], dp2[MAX];

int solution(vector<int> money) {
    int n = money.size();
    
    dp[0] = money[0];
    dp[1] = max(money[1], money[0]);
    for (int i = 2; i <= n-2; i++) {
        dp[i] = max(money[i] + dp[i-2], dp[i-1]);
    }
    
    dp2[1] = money[1];
    dp2[2] = max(money[2], money[1]);
    for (int i = 3; i <= n-1; i++) {
        dp2[i] = max(money[i] + dp2[i-2], dp2[i-1]);
    }
    
    int answer = max(dp[n-2], dp2[n-1]);
    return answer;
}