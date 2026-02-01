#include <bits/stdc++.h>
using namespace std;

string target; int cnt, answer; bool found;
char vowels[5] = {'A', 'E', 'I', 'O', 'U'};

void go(string cur) {
    if (found) return;
    
    if (cur.size()) {
        cnt++;
        if (cur == target) {
            answer = cnt;
            found = true;
            return;
        }
    }
    if (cur.size() == 5) return;
    for (char c : vowels) {
        go(cur + c);
        if (found) return;
    }
}

int solution(string word) {
    answer = 0; cnt = 0; found = false; 
    target = word;
    go("");
    return answer;
}