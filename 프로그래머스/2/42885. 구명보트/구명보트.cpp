#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0; int idx = 0;

    sort(people.begin(), people.end());

    while(people.size() > idx) {
        int f = people[idx];
        int b = people.back();
        if (f + b <= limit) {
            idx++;
        }
        answer++;
        people.pop_back();

    }
    
    return answer;
}