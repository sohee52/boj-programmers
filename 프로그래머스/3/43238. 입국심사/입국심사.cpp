#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long solution(int n, vector<int> times) {
    ll answer = 0;
    sort(times.begin(), times.end());
    
    ll left = 1;
    ll right = (ll) times.back() * n;
    
    while(left <= right) {
        ll mid = (left + right) / 2;
        ll cnt = 0;

        for (int time : times) {
            cnt += mid / time;
        }
        
        if (cnt >= n) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return answer;
}